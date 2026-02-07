//Q26. The school report card system stores subject marks for each student. 
//Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.

#include<iostream>

using namespace std;

int main()
{
    int n;
    int maths,phy,chem,eng,pe;
    float total,percentage;

    cout<<"Enter number of students";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"enter the marks of maths phy chem eng and pe for "<<i<<" student";
        cin>>maths>>phy>>chem>>eng>>pe;

        total = maths+phy+chem+eng+pe;
        percentage= total/5;

        cout<<"total marks of "<<i<<" student :"<<total<< endl;
        cout<<"percentage of "<<i<<" student :"<<percentage<< endl;
    }
    return 0;
}
