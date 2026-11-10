#include<iostream>
using namespace std ;
int main (){
 int a,b,c;

 cout<<"Enter the all following details :"<<endl;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
cout<<"Enter the value of c :";
cin>>c;

try{
    if(a>b && a>c){
        cout<<"The greater number is a :"<<a<<endl;

    }
    else if ( b>a && b>c){
        cout<<"The greater number is b :"<<b<<endl;

    }
    else {
       throw c;

        
    }
}
catch(int i){
    cout<<"The greater number is  c :"<<i<<endl;
}

    return 0;
}