#include<iostream>
using namespace std;
class check {
private :
int a;

public :
void setdata(int a1){
    a=a1;
   

}
check operator -(){  // this is the another concept where we make a copy of object in the form of temproary and we done our following solution .
check temp;
temp.a= -a;
return temp ;

}
void display (){
    cout<<"number become :"<<a<<endl;

}
};
int main (){
    int a;
cout<<"enter the vale of a  :";
cin>>a;
check c;
c.setdata(a);
   c=-c; // or we cam write like c= c.operator-();
c.display();

    return 0;
}
