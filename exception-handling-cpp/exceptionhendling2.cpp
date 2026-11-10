#include<iostream>
using namespace std;
int main () {
int a,b,sum,sub,mul,div,mod;
cout<<"Enter the following details ."<<endl;

cout<<"Enter the value of A :";
cin>>a;

cout<<"Enter the value of B :";
cin>>b;
// addition 
try{
    if ( a != 0 || b != 0){
         sum = a+b;
         cout<<"The final sum is :"<<sum<<endl;
          
    }
    else {
        throw 0;
    }

}
catch( int i){
     cout<<"Operation failed "<<endl;
cout<<"The final sum is "<<i<<endl;
}

// subtraction 
 

try{
if ( a != 0 || b != 0){
         sub = a-b;
         cout<<"The final subtract is :"<<sub<<endl;
          
    }
    else {
        throw 0;
    }

}
catch( int i){
     cout<<"Operation failed "<<endl;
cout<<"The final subtract is "<<i<<endl;
}

// multiplication 


try{
if ( a != 0 || b != 0){
         mul = a*b;
         cout<<"The final multiplie  is :"<<mul<<endl;
          
    }
    else {
        throw 0;
    }

}
catch( int i){
     cout<<"Operation failed "<<endl;
cout<<"The final multiple  is "<<i<<endl;
}


// division 

try{
if (  b != 0){
         div = a/b;
         cout<<"The final division  is :"<<div<<endl;
          
    }
    else {
        throw 0;
    }

}
catch( int i){
    cout<<"Operation failed "<<endl;
cout<<"The final division is "<<i<<endl;
}

// mode 
try{
if (  b != 0){
         mod = a%b;
         cout<<"The final mode is :"<<mod<<endl;
          
    }
    else {
        throw 0;
    }

}
catch( int i){
     cout<<"Operation failed "<<endl;
cout<<"The final mode is "<<i<<endl;
}
    return 0;
}