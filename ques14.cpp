#include<iostream>

using namespace std;

int main(){
    int n1, n2;
    char choice;
    
    cout<<"Enter number 1 :";
    cin>>n1;
    cout<<"Enter number 2 :";
    cin>>n2;

    cout<<"CHOOSE ONE: "<<endl<<"1. Addition \n2. Subtraction \n3. Multiplication \n4. Divide \n";
    cin>>choice;

    switch (choice){

        case '1' : cout<<n1 + n2;
        break;
        case '2' : cout<<n1 - n2;
        break;
        case '3' : cout<<n1*n2;
        break;
        case '4' : cout<<n1/n2;
        break;
        default : cout<<"Invalid choice";
    }
    return 0;
}