// sequence structure - entry-->action 1--->2--->3---exit
// selection structure - entry--->condition checking( true or false)
//---> action 1 or action 2---->exit
//loop structure - entry---.loop--->condition checking---> action performimg a1---->again on loop----> if false -------> exit 


// 1. if else statement
//   if (i<3){
//    cout<<i;
//    i++;
//}
  
 // 2. if - else __Ladder
 // 3.switch case
//    switch (expression){
//     case 1:
//     actioni
//     default{

//     }
//    }
//    }
  


#include<iostream>
using namespace std;


int main(){
    //cout<<"this is tutorial 9";
    int age;
    cout<<"tell me your age";
    cin>>age;
    //selection controlstructure - if else ladder
    // if(( age<18) && (age>0)){
    //     cout<<"you cannot come to my party"<<endl;
    // }
    // else if(age ==18){
    //     cout<<"you will get the pass of the party"<<endl;
    // }
    // else if(age<1)
    // {
    //     cout<<"you are not yet born"<<endl;
        
    // }
    // else {
    //     cout<<"you can come to the party"<<endl;
    // }
    // switch case statement


    switch(age)
{
    case 18:
    cout<<"you are 18";
    break;
    case 22:
    cout<<"you are 22"<<endl;
    break;
    case 2:
    cout<<"you are 2"<<endl;
    break;
    default:
    cout<<"no special cases "<<endl;
    break;
      

}
cout<<"you are very special case"<<endl; 
    return 0;
}
