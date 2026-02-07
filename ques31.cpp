#include<iostream>

using namespace std;

int main()
{
    int num[5];
    int i;
    int count=0;

    for(i=0;i<5;i++)
    {
        cout<<"enter the number "<<i+1<<" :";
        cin>>num[i];
    }
    for(i=0;i<=5;i++)
    {
        if(num[i]%3==0 && num[i]%5==0)
        count++;
    }
    cout<<"numbers that are divisible by 3 and 5 are : "<<count;
    return 0;
}