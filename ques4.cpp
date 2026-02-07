#include<iostream>

using namespace std;

int main()
{
    int itemno;
    int quantity;
    float price;
    float discount;
    float finalamount;

    cout<<"enter the item no";
    cin>>itemno;
    cout<<"enter the quantity";
    cin>>quantity;
    cout<<"enter the unit price";
    cin>>price;

    discount=(price*20)/100;
    finalamount= quantity*(price-discount);

    cout<<"The final bill is "<<finalamount;
    return 0;
}