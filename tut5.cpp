//there are two types of header files
//1.system header files:it comes with the compiler
#include<iostream>
//2.user defined header files:it is written by the programmer
//#include"this.h"//-->this will produce an error if this .h is not presrent in current directory

using namespace std;

int main()
{   
    int a=4, b=5;
    cout<<"operators in c++:"<<endl;
    cout<<"following are the type of operators in c++"<<endl;
    //Arithmetic operators
    cout<<"the value of a+b is"<<a+b <<endl;
    cout<<"the value of a-b is"<<a-b <<endl;
    cout<<"the value of a*b is"<<a*b <<endl;
    cout<<"the value of a/b is"<<a/b <<endl;
    cout<<"the value of a%b is"<<a%b <<endl;
    cout<<"the value of a++ is"<<++a <<endl;
    cout<<"the value of a-- is"<<--a <<endl;
    cout<<"the value of ++a is"<<a++ <<endl;
    cout<<"the value of --a is"<<a-- <<endl;
    cout<<endl;

    //assignment operator-->used to assign value to variables
    // int a =3,b=9;
    // char d= 'd';
    //comparison operator
    cout<<"Following are the comparison operators in c++"<<endl;
    cout<<"the value of a==b is" <<(a==b)<<endl;
    cout<<"the value of a != b is" <<(a!=b)<<endl;
    cout<<"the value of a >= b is" <<(a>=b)<<endl;
    cout<<"the value of a <= b is" <<(a<=b)<<endl;
    cout<<"the value of a > b is" <<(a>b)<<endl;
    cout<<"the value of a < b is" <<(a<b)<<endl;

    //logical operators
    cout<<"following are the logical operator in c++"<<endl;
    cout<<"the value of this logical and  operator is ((a==b) && (a<b)) is: "<<((a==b) && (a,b)) <<endl;
    cout<<"the value of this logical or  operator is((a==b) || (a<b)) is:" <<((a==b) || (a<b))<<endl;

    cout<<"the value of this logical not  operator is(!(a==b)  is:" <<(!(a==b) )<<endl;
    
    return 0;
}