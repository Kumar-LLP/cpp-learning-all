#include<iostream>
using namespace std;
float a,b,c;
void readdata( );
float  adddata( );
void displaydata ();
int   main (){
 readdata( );
 displaydata ();
return 0;
}
void readdata (){
   
cout<<" Enter  the number below  for floating sum calculation : \n ";

cout<<"Enter the first number :";
cin>> a;

cout<<"Enter the second  number :";
cin>>b;

cout<<"Enter the third  number :";
cin>>c ;



}

float  adddata(  ){
    float add;
      add = a+b+c;
    
return add ;

}
 void displaydata(){
     cout<< " The sum of three floating number is :" <<adddata()<<endl;
 }
 