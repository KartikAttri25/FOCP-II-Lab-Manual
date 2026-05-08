#include<iostream> 
using namespace std;
int main(){
    int a,b,c;

    cout<<"enter value of a b and c :";

    // scanf("%d %f %c", &a,&b,&c);    this was in C

    cin>>a;  //can we written as cin>>a>>b>>c;
    cin>>b;
    cin>>c;

    cout<<"value of a is "<<a<<" value of b is "<<b<<" value of c is "<<c;
    return 0;
}
