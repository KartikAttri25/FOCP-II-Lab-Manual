#include<iostream>

using namespace std;

int main()
{
    int temp[10];
    int i;
    int mintemp;

    for(i=0;i<10;i++){
    cout<<"temperature of day "<<i+1<<" :";
    cin>>temp[i];
    }
    mintemp=temp[0];
    for(i=0;i<10;i++)
    {
        if(temp[i]<mintemp)
        {
            mintemp=temp[i];
        }

    }
    cout<<"minimum temperature is"<<mintemp<<endl;
    return 0;
}
