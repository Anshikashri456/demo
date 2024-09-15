#include<iostream>
using namespace std;

int c = 45;
int main(){
    //*********built in data types ********************
    //int  a,b,c; 
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;

    // c = a + b ;
    // cout<<"the sum is "<<c <<endl;
    // cout<<"The global c is" <<::c; 

    //*******Float, double, and long double literals ************
    // float d=34.4f;
    // long double e = 34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is"<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is"<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is"<<sizeof(34.4l)<<endl;
    // cout<<"The sze of 34.4L  is"<<sizeof(34.4L)<<endl;
    // cout<<"the value of d is "<<d<<"the value of e is "<<e;

    //******************Reference Variables*************
   // rohan --> Monty ---> rohu ----> Dangerous coders
   // float x = 455;
   //float & y = x;
   //cout<<x<<endl;
   //cout<<y<<endl;
 

 //**********typecasting*******************
 int a = 45;
 float b = 45.46;
 cout<<"The value of a is "<<(float)a ;
 cout<<"The value of a is "<<float(a);

 cout<<"the value of b is "<<(int)b;
 cout<<"The value of b is "<<int(b);
 int c = int(b);
 
 cout<<"the expression  is "<<a + b;
 cout<<"the expression  is "<<a + int(b)
 cout<<"the expression  is "<<a + int(b)

 return 0;
}