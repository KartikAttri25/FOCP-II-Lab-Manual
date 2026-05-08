#include<iostream> 
using namespace std;
int main(){
    int a=10;
    float b=14.62;
    
    string name="FOCP II";
    cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b;
    cout<<"\n value of name is "<<name;
    return 0;
}


//input string

#include<iostream> 
using namespace std;
int main(){
   string name;
    
    cout<<"enter name";
    cin>>name;                //will not read after backspace
    cout<<"name is "<<name;
    return 0;
}



//better way to read sentence

#include<iostream> 
using namespace std;
int main(){
   string name;
    
    cout<<"enter name ";
   
    getline(cin,name);         // will read full line
    cout<<"name is "<<name;
    return 0;
}
