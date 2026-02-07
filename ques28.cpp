//Q28. A data processing system classifies even and odd inputs separately. Implement a solution to 
//store 5 elements in an array, compute sum of all even and sum of all odd numbers.

#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int sumeven = 0;
    int sumodd = 0;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> a[i];
    }

    for(int i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
            sumeven += a[i];
        else
            sumodd += a[i];
    }

    cout << "Sum of all even numbers is " << sumeven << endl;
    cout << "Sum of all odd numbers is " << sumodd << endl;

    return 0;
}