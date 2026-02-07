/*Q6. An HR system needs to calculate employees net salaries, including a fixed 12% bonus for each worker. 
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and 
display results. */

#include<iostream>

using namespace std;

int main()
{
    int i,n;int salary;
    int bonus;
    int netsalary;

    cout<<"enter the number of employees";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<" enter the salary of "<<i<< " employee :";
        cin>>salary;

        bonus=(12*salary)/100;
        netsalary=bonus+salary;

        cout<<"bonus:"<<bonus<< endl;
        cout<<"netsalary:"<<netsalary<< endl;

    }
}