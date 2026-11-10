//Calculate the area and perimeter of a rectangle
#include<iostream>
using namespace std;

class check {
private :
float length ;
float breadth ;


public:
 void setdata( float l , float b){
    length =l;
    breadth = b;
 }
 void area(){
    float are ;
    are=length*breadth;
    cout<<"The final area of rectangle is : "<<are<<endl;

 }
 void perimeter (){
float peri;
peri=2*(length+breadth);
  cout<<"The final perimeter  of rectangle is : "<<peri<<endl;
 }
};

int  main (){
    int l,b;
    cout<<" Enter the following data :\n";

    check c1 ;
    cout<<" Enter the vale of length : ";
    cin>>l;
     cout<<" Enter the vale of breadth : ";
    cin>>b;
     c1.setdata(l,b);
     c1.area();
     c1.perimeter();
return 0;
}
