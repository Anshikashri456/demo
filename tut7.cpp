#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // int a = 34;
    // cout<<"the value of a was:\n "<<a;
    // a = 45;
    // cout<<"the value of a is:\n"<<a;
    // constant in c++
   // const  int a = 3;
    //cout<<"the value of a was:"<<a<<endl;
    //a = 45 ;?/you will get an error because a is a constant
    //cout<<" the value of a is:"<<a<<endl;
    
    //***************manipulat0r in c++**********

    //  int a = 3, b = 78 , c =1233;
    // cout<<"the value of a without setw is:"<<a<<endl;
    // cout<<"the value of b without setw is:"<<b<<endl;
    // cout<<"rhe value of c without setw is:"<<c<<endl;


    // cout<<"the value of a is:"<<setw(4)<<a<<endl;
    // cout<<"the value of b is:"<<setw(4)<<b<<endl;
    // cout<<"rhe value of c is:"<<setw(4)<<c<<endl;

    //**********************opertaor pecedence*************
    int a =3, b = 4;
     //int c = (a*5)+b
    int c = ((((a*5)+b)-45)+87);
   
    cout<<c; 

    return 0;

}


