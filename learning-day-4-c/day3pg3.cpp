//Print the size of int, float, double, char using sizeof()
#include<iostream>
using namespace std ;

int main (){
    int a,x ;
    float b;
    double c;
    char d;

    int y,z,p;
x=sizeof(a);
y=sizeof(b);
z=sizeof(c);
p=sizeof(d);

cout<<"The size of any number is : "<<x<<endl;
cout<<"The size of any float number  is : "<<y<<endl;

cout<<"The size of any double number   is : "<<z<<endl;
cout<<"The size of any charecter  is : "<<p<<endl;


    return 0;

}