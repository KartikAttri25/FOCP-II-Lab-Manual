#include<iostream>

using namespace std;

int main()
{
    int i,j;
    string str;

    cout<<"enter the string";
    cin>>str;

    for(i=0,j=str.length()-1;i<j;i++, j--)
    {
        if(str[i]!=str[j])
        {
            cout<<"no the string is not palindrome";
            break;
        }
        else{
            cout<<"yes the string is palindrome";
            break;
        }
    }
    return 0;
}