#include<iostream>

using namespace std;

int main()
{
    int employee[10];
    int i;
    float salary;
    float totalsalary=0;
    float average;

    for(i=0;i<10;i++)
    {
        cout<<"Enter the salary of employee"<<i+1<<" :";
        cin>>employee[i];
    }
    for(i=0;i<10;i++)
    {
        totalsalary=totalsalary+employee[i];

        average=totalsalary/10;
    }
    cout<<"total salary is "<<totalsalary<<endl;
    cout<<"average salary is "<<average;
}