#include<iostream>


using namespace std;

int main(){
    int n, num, max;

    cout<<"Enter how many numbers: ";
    cin>>n;

    cout<<"Enter number 1: ";
    cin>>num;
    max = num;

    for(int i=2;i<=n;i++){
        cout<<"Enter number "<<i<<" : ";
        cin>>num;

        if(num>max){
            max = num;
        }
    }

    cout<<"The largest number is "<<max;


    return 0;
}