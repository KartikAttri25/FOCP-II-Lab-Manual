#include<iostream>

using namespace std;

int main()
{
    int s1,s2,s3;

    cout<<"enter side 1 :";
    cin>>s1;
    cout<<"enter side 2 :";
    cin>>s2;
    cout<<"enter side 3 :";
    cin>>s3;

    if(s1==s2 && s2==s3)
    cout<<"the triangle is equilateral";
    else if((s1+s2)>s3 && (s2+s3)>s1 && (s3+s1)>s2)
    cout<<"the triangle is isosceles";
    else
    cout<<"the triangle is scalene";

}