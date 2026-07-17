#include<iostream>
using namespace std;

class check{
private :
 static int count  ;
int number ;

public:
void setdata( int num){
count = num ;
count ++;
}
void display(){
cout<<"Count = "<<count ;
}      
 };
 int check::count = 0;
int main (){
int number ;

cout<<"Enter any number :"<<endl;
cin>>number ;

check c;
c.setdata(number);
c.display();
return 0;
}