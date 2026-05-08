#include<iostream>
using namespace std;
int main()
{
    cout<<"hellloooo worrllddd";
    return 0;
}



//other way 

#include<iostream>
//using namespace std;
int main()
{
  std:: cout<<"hellloooo worrllddd";
    return 0;
}



//printing values

#include<iostream>
int main(){
    int a = 53;
    float b = 14.82;
    char c = 'H';

    // printf("the value of a = %d the value of b is %f",a,b);  // used in C

    std::cout<<"the value of a is "<<a<<" the value of b is "<<b<<" value of c is "<<c;
    return 0;
} 



//for new line

#include<iostream>     //we can use \n also like std::cout<<"\n value of a is"<<a;
int main(){
    int a = 53;
    float b = 14.82;
    char c = 'H';

    std::cout<<"the value of a is "<<a<<std::endl<<"the value of b is "<<b<<std::endl<<"value of c is "<<c;
    return 0;
} 



#include<iostream>     
int main(){
    int a = 53;
    float b = 14.82;
    char c = 'H';

    std::cout<<"\nthe value of a is "<<a;
    std::cout<<"\nthe value of b is "<<b;
    std::cout<<"\nvalue of c is "<<c;
    return 0;
} 
