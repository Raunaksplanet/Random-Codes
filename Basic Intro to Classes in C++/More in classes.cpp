#include <iostream>
using namespace std;

class shop
{
private:
    int Voucher[10];
    int Price[10];
    int counter = 0;
    int total = 0;
public:
    void displayData(void);
    void setData(void);
    void maxAmount(void);
};

void shop ::setData()
{
    cout << "Item Number " << counter + 1 << endl;
    cout << "Enter voucher No: ";
    cin >> Voucher[counter];

    cout << "Enter Price: ";
    cin >> Price[counter];
    counter++;
    cout << "\n";
}

void shop ::displayData()
{
    cout << "\nVoucher and Prices are:-" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of Voucher No: " << Voucher[i] << " is " << Price[i] << endl;
    }
}

void shop ::maxAmount()
{
    cout << "\nTottal Price is:-" << endl;
    for (int i = 0; i < counter; i++)
    {
        total = Price[i] + total;
    }
    cout << "Total amount: " << total;
}

int main()
{
    shop one;
    one.setData();
    one.setData();
    one.displayData();
    one.maxAmount();
}