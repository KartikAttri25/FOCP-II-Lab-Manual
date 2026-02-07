//Q5. A student wants to swap the values of two variables for practising coding basics. 
//Implement a solution to swap two numbers using different techniques. 

#include<iostream>

using namespace std;

int main()
{
    int a,b,temp;
    int n;
    int c;

    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<"enter technique 1 or 2";
    cin>>n;

    if (n==1)
    {
        temp=a;
        a=b;
        b=temp;

        cout<<"the new value of a is: "<<a;
        cout<<"the new value of b is: "<<b;
    }
    else
    {
    a=a+b;
    b=a-b;
    a=a-b;

        cout<<"the new value of a is: "<<a;
        cout<<"the new value of b is: "<<b;
    }
}