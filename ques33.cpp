#include<iostream>

using namespace std;

int main()
{
    int marks[3][5];
    int i;int j;

    for(i=0;i<3;i++)
    {
        cout<<"enter the marks for student "<<i+1<<endl;
        for(j=0;j<5;j++)
        {
            cout<<"subject "<<j+1<<" :";
            cin>>marks[i][j];
        }
    }

    cout<<"marks in 2nd subject of 1st student"<<marks[0][1];
    cout<<"marks in 5th subject of 3rd student. "<<marks[2][4];

    return 0;


}