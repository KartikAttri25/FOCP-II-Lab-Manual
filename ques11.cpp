#include<iostream>

using namespace std;

int main()
{
    int item;
    int price;
    int amount;
    int discount;
    int finalamount;

    cout<<"enter the number of items";
    cin>>item;

    cout<<"enter the price";
    cin>>price;

    amount = item*price;
    cout<<"Amount is "<<amount<< endl;

    if(amount>1000)
    {
        discount= (10*amount)/100;
        finalamount=amount-discount;
    }
    else
    {
        discount=0;
        finalamount=amount-discount;
    }

    cout<<"Discount is "<< discount << endl;
    cout<<"Final Amount is "<< finalamount<< endl;
}