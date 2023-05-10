#include<iostream>
using namespace std;

class New
{
    private: 
    int a , b, c;
    public:
    int e, d;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "Value of A is " << a << endl;
        cout << "Value of B is " << b << endl;
        cout << "Value of C is " << c << endl;
        cout << "Value of D is " << d << endl;
        cout << "Value of E is " << e << endl;
    }
};

void New :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    New raunak;
    raunak.e = 12, raunak.d = 11;
    raunak.setData(1,2,3);
    raunak.getData();
}