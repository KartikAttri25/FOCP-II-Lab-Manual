#include<iostream>

using namespace std;

int main()
{
    int year;

    cout<<"enter the year you want to check ";
    cin>>year;

    if (year%400==0)
        cout<<"the year is a leap year and february has 29 days";
        else if(year%4==0 && year %100!=0)
        cout<<"the year is a leap year and february has 29 days";
        else
        cout<<"the year is not leap year and february has 28 days";
    
}