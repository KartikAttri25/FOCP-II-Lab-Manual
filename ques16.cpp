#include<iostream>

using namespace std;

int main()
{
    int num;
    int i;
    int n;

    cout<<"enter the number";
    cin>>num;

    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<"its not a prime number";
            break;
        }
        
        else
        {
            cout<<"its a prime number";
            break;
        }
    return 0;

}
}