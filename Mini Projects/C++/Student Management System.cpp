#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
class SMS
{
public:
    char s_id[5];
    char s_name[30];
    char s_clas[15];
    char s_city[15];
    char s_pno[15];
};
class SMS_OPERATIONS
{
public:
    SMS st,sr;
    fstream fp1, fp2, fp3;
    void firstpage()
    {
        system("cls");
        cout<<"\t\tStudent Management System\n\n";
        cout<<"1. Add Student   \t2. Show Student\n\n";
        cout<<"3. Modify Student\t4. Delete Student\n\n";
        cout<<"5. Search Student\t6. Show Recycle Bin\n\n";
        cout<<"7. Recover Data from Recycle Bin\n\n";
    }
    int autoid()
    {
        int max1 = 0, t = 0;
        fp1.open("SMSA.txt",ios::in);
        if(fp1.fail()==1){
            max1 = 101;
            return max1;
        }
        fp1.close();
        fp1.open("SMSA.txt",ios::in);
        while(fp1.read((char *)&sr,sizeof(sr))){
            t = atoi(sr.s_id);
            if ( t > max1)
                max1 = t;
        }
        fp1.close();
        max1 = (t == 0)? 101:max1 + 1;
        return max1;
    }
    void getInsertData()
    {
        system("cls");
        cout<<"\t\tInsert Module Called..\n\n";
        itoa(autoid(),st.s_id,10);
        cout<<"Enter ID -- "<<st.s_id<<"\n";
        //cin.getline(st.s_id,sizeof(st.s_id));
        cout<<"Enter Name -- ";
        cin.getline(st.s_name,sizeof(st.s_name));
        cout<<"Enter Class -- ";
        cin.getline(st.s_clas,sizeof(st.s_clas));
        cout<<"Enter City -- ";
        cin.getline(st.s_city,sizeof(st.s_city));
        cout<<"Enter Phone Number -- ";
        cin.getline(st.s_pno,sizeof(st.s_pno));
        storedata();
    }
    void storedata()
    {
        fp1.open("SMSA.txt",ios::out | ios::app);
        fp1.write((char *) &st,sizeof(st));
        cout<<"\n\nData Successfully Inserted\n\n";
        fp1.close();
        cout<<"Do you want to insert more data press 1 , Press 2 for Exit else any key..";
        char c;
        c = getch();
        if ( c == '1'){
            getInsertData();
        }
        else if ( c == '2')
            exit(0);
    }
    void showdata()
    {
        int t = 0;
        system("cls");
        cout<<"\t\tShow Student Information..\n\n";
        fp1.open("SMSA.txt",ios::in);
        if(fp1.fail()==1){
            cout<<"Data/ File Not Exists\n\n";
            return;
        }
        fp1.close();
        fp1.open("SMSA.txt",ios::in);
        while(fp1.read((char *)&sr,sizeof(sr))){
            cout<<sr.s_id<<"\t";
            cout<<sr.s_name<<setw(8)<<"\t";
            cout<<sr.s_clas<<"\t";
            cout<<sr.s_city<<"\t";
            cout<<sr.s_pno<<"\n\n";
            t++;
        }
        if ( t == 0)
            cout<<"\n\nData Not Found..\n\n";
        fp1.close();
    }
    void searchdata()
    {
        int t = 0;
        char f_id[5];
        system("cls");
        cout<<"\t\tSearch Student Information..\n\n";
        fp1.open("SMSA.txt",ios::in);
        if(fp1.fail()==1){
            cout<<"Data/ File Not Exists\n\n";
            return;
        }
        fp1.close();
        cout<<"\n\nEnter Student ID -- ";
        cin.getline(f_id,sizeof(f_id));
        cout<<"\n\n";
        fp1.open("SMSA.txt",ios::in);
        while(fp1.read((char *)&sr,sizeof(sr))){
            if (strcmp(f_id,sr.s_id) == 0){
                cout<<"Student ID -- "<<sr.s_id<<"\n\n";
                cout<<"Student Name -- "<<sr.s_name<<setw(8)<<"\n\n";
                cout<<"Student Class -- "<<sr.s_clas<<"\n\n";
                cout<<"Student City -- "<<sr.s_city<<"\n\n";
                cout<<"Student Phone No -- "<<sr.s_pno<<"\n\n";
                t++;
            }
        }
        if ( t == 0)
            cout<<"\n\nData Not Found..\n\n";
        fp1.close();
    }
    void modifydata()
    {
        int t = 0, u = 0;
        char f_id[5], c;
        system("cls");
        cout<<"\t\tModify Student Information..\n\n";
        fp1.open("SMSA.txt",ios::in);
        if(fp1.fail()==1){
            cout<<"Data/ File Not Exists\n\n";
            return;
        }
        fp1.close();
        cout<<"\n\nEnter Student ID -- ";
        cin.getline(f_id,sizeof(f_id));
        cout<<"\n\n";
        fp1.open("SMSA.txt",ios::in);
        fp2.open("TEMP_SMSA.txt",ios::out | ios::app);
        while(fp1.read((char *)&sr,sizeof(sr))){
            if (strcmp(f_id,sr.s_id) == 0){
                    st = sr;
                cout<<"Student ID -- "<<sr.s_id<<"\n\n";
                cout<<"Student Name -- "<<sr.s_name<<setw(8)<<"\n\n";
                cout<<"Student Class -- "<<sr.s_clas<<"\n\n";
                cout<<"Student City -- "<<sr.s_city<<"\n\n";
                cout<<"Student Phone No -- "<<sr.s_pno<<"\n\n";
                t++;
                cout<<"\n\nPress 1. Modify Name\t2. Modify Class\t3. Modify City\n\n";
                cout<<"4. Modify Phone No\t5. All Records\t6. Skip Modification.\n\n";
                cout<<"Choose any of them .. ";
                c = getch();
                if (c == '1'){
                    cout<<"\nEnter Modified Name -- ";
                    cin.getline(st.s_name,sizeof(st.s_name));
                }
                else if (c == '2'){
                    cout<<"\nEnter Modified Class -- ";
                    cin.getline(st.s_clas,sizeof(st.s_clas));
                }
                else if (c == '3'){
                    cout<<"\nEnter Modified City -- ";
                    cin.getline(st.s_city,sizeof(st.s_city));
                }
                else if (c == '4'){
                    cout<<"\nEnter Modified Phone No -- ";
                    cin.getline(st.s_pno,sizeof(st.s_pno));
                }
                else if (c == '5'){
                    cout<<"\nEnter Modified Name -- ";
                    cin.getline(st.s_name,sizeof(st.s_name));
                    cout<<"\nEnter Modified Class -- ";
                    cin.getline(st.s_clas,sizeof(st.s_clas));
                    cout<<"\nEnter Modified City -- ";
                    cin.getline(st.s_city,sizeof(st.s_city));
                    cout<<"\nEnter Modified Phone No -- ";
                    cin.getline(st.s_pno,sizeof(st.s_pno));
                }
                else if ( c == '6'){
                    u = 1;
                    fp2.write((char *) &sr,sizeof(sr));
                }
                if ( u == 0){
                    cout<<"\n\nDo you want to Modify Record Press 1 else any key..";
                    c = getch();
                    if ( c == '1')
                        fp2.write((char *) &st,sizeof(st));
                    else{
                        fp2.write((char *) &sr,sizeof(sr));
                        u = 1;
                    }
                }
            }
            else{
                fp2.write((char *) &sr,sizeof(sr));
            }
        }
        fp2.close();
        fp1.close();
        if ( t == 0){
            cout<<"\n\nData Not Found..\n\n";
            remove("TEMP_SMSA.txt");
        }
        else if ( u == 1){
            cout<<"\n\nModify Operation Cancel..\n\n";
            remove("TEMP_SMSA.txt");
        }
        else{
            cout<<"\n\nData Successfully Updated..\n\n";
            remove("SMSA.txt");
            rename("TEMP_SMSA.txt","SMSA.txt");
        }

    }
    void deletedata()
    {
        int t = 0, u = 0;
        char f_id[5], c;
        system("cls");
        cout<<"\t\tDelete Student Information..\n\n";
        fp1.open("SMSA.txt",ios::in);
        if(fp1.fail()==1){
            cout<<"Data/ File Not Exists\n\n";
            return;
        }
        fp1.close();
        cout<<"\n\nEnter Student ID -- ";
        cin.getline(f_id,sizeof(f_id));
        cout<<"\n\n";
        fp1.open("SMSA.txt",ios::in);
        fp2.open("TEMP_SMSA.txt",ios::out);
        while(fp1.read((char *)&sr,sizeof(sr))){
            if (strcmp(f_id,sr.s_id) == 0){
                cout<<"Student ID -- "<<sr.s_id<<"\n\n";
                cout<<"Student Name -- "<<sr.s_name<<setw(8)<<"\n\n";
                cout<<"Student Class -- "<<sr.s_clas<<"\n\n";
                cout<<"Student City -- "<<sr.s_city<<"\n\n";
                cout<<"Student Phone No -- "<<sr.s_pno<<"\n\n";
                t++;
                cout<<"\n\n1. Permanent Delete\t2. Temporary Delete\t3. Skip Delete Operation..\n\n";
                cout<<"Choose any of them..\n\n";
                c = getch();
                if ( c == '1'){
                    cout<<"\n\nAre you sure, you want to delete data Permanently.. Press 1 else any key.. \n\n";
                    c = getch();
                    if ( c == '1'){
                        cout<<"Data Successfully Deleted..\n\n";
                    }else{
                        fp2.write((char *) &sr,sizeof(sr));
                        u = 1;
                    }
                }
                else if ( c == '2'){
                    cout<<"\n\nAre you sure, you want to delete data Temporary.. Press 1 else any key.. \n\n";
                    c = getch();
                    if ( c == '1'){
                        fp3.open("REC_SMSA.txt",ios::out | ios::app);
                            fp3.write((char *) &sr,sizeof(sr));
                        fp3.close();
                        cout<<"\n\nData Successfully Deleted and Save to Recycle Bin..\n\n";

                    }else{
                        fp2.write((char *) &sr,sizeof(sr));
                        u = 1;
                    }
                }
                else if ( c == '3'){
                    fp2.write((char *) &sr,sizeof(sr));
                    u = 1;
                }
            }
            else{
                fp2.write((char *) &sr,sizeof(sr));
            }
        }
        fp2.close();
        fp1.close();
        if ( t == 0){
            cout<<"\n\nData Not Found..\n\n";
            remove("TEMP_SMSA.txt");
        }
        else if ( u == 1){
            cout<<"\n\nDelete Operation Cancel..\n\n";
            remove("TEMP_SMSA.txt");
        }
        else{
            //cout<<"\n\nData Successfully Deleted..\n\n";
            remove("SMSA.txt");
            rename("TEMP_SMSA.txt","SMSA.txt");
        }

    }
    void showRecycledata()
    {
        int t = 0;
        system("cls");
        cout<<"\t\tShow Recycle Bin Data..\n\n";
        fp1.open("REC_SMSA.txt",ios::in);
        if(fp1.fail()==1){
            cout<<"Data/ File Not Exists\n\n";
            return;
        }
        fp1.close();
        fp1.open("REC_SMSA.txt",ios::in);
        while(fp1.read((char *)&sr,sizeof(sr))){
            cout<<sr.s_id<<"\t";
            cout<<sr.s_name<<setw(8)<<"\t";
            cout<<sr.s_clas<<"\t";
            cout<<sr.s_city<<"\t";
            cout<<sr.s_pno<<"\n\n";
            t++;
        }
        if ( t == 0)
            cout<<"\n\nData Not Found..\n\n";
        fp1.close();
    }
    void recoverRecycledata()
    {
        int t = 0;
        char c;
        system("cls");
        cout<<"\t\tRecover Recycle Bin Data..\n\n";
        fp1.open("REC_SMSA.txt",ios::in);
        if(fp1.fail()==1){
            cout<<"Data/ File Not Exists\n\n";
            return;
        }
        fp1.close();
        fp1.open("REC_SMSA.txt",ios::in);
        while(fp1.read((char *)&sr,sizeof(sr))){
            cout<<sr.s_id<<"\t";
            cout<<sr.s_name<<setw(8)<<"\t";
            cout<<sr.s_clas<<"\t";
            cout<<sr.s_city<<"\t";
            cout<<sr.s_pno<<"\n\n";
            t++;
        }
        if ( t == 0){
            cout<<"\n\nData Not Found..\n\n";
            return;
        }
        fp1.close();
        fp1.open("SMSA.txt",ios::out | ios::app);
        fp2.open("REC_SMSA.txt",ios::in);
        cout<<"\n\n1. Recover 1 By 1\t2. Recover All Records\t3. Skip Recovery..\n\n";
        c = getch();
        int u = 0;
        if ( c == '1'){

        }
        else if ( c == '2'){
            cout<<"\n\nAre you sure you want to recover all Records Press 1 else any key..\n\n";
            c = getch();
            if ( c == '1'){
                while ( fp2.read((char *) &sr, sizeof(sr))){
                    fp1.write((char * )&sr, sizeof(sr));
                }
                u = 1;
            }
        }
        else if ( c == '3'){

        }
        fp2.close();
        fp1.close();
        if ( u == 1){
            cout<<"\n\nData Successfully Recoverd..\n\n";
            remove("REC_SMSA.txt");
        }
    }
};
int main()
{
    SMS_OPERATIONS s;
    system("cls");
    s.firstpage();
    cout<<"Choose what you want..";
    char c;
    c= getch();
    if ( c == '1'){
        s.getInsertData();
    }
    else if ( c == '2'){
        s.showdata();
    }
    else if ( c == '3'){
        s.modifydata();
    }
    else if ( c == '4'){
        s.deletedata();
    }
    else if ( c == '5'){
        s.searchdata();
    }
    else if ( c == '6'){
        s.showRecycledata();
    }
    else if ( c == '7'){
        s.recoverRecycledata();
    }
    cout<<"\n\nDo you want to Continue Press 1 else any key..";
    c = getch();
    if ( c == '1')
        main();
}
