#include<iostream>

using namespace std;

int main()
{
    int n,i;
    int id;

    cout<<"enter the number ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"enter the "<<i<<" id :";
        cin>>id;
        if(id%3==0&&id%5==0)
        cout<<"Buzz Fuzz"<< endl; 
        else if(id%3==0)
        cout<<"Buzz"<< endl;
        else if(id%5==0)
        cout<<"Fuzz"<< endl;

    }
}