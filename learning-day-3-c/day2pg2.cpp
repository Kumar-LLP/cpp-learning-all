// Converting Convert temperature from Celsius to Fahrenheit  and vice versa .><
#include<iostream>
using namespace std;
class check{
private :
float cel;
float frn;

public :
void setdata(float c , float f){

    cel =c ;
    frn =f ;
}

 void getdata1(){
      float fah = ((cel  * (9.0/5)) + 32);
    cout<<"The following conversion  °C to °F is   :"<<fah<<endl;

 }
 void getdata2(){
    float cl = (( frn-32 )* (5.0/9 ));
    cout<<"The following conversion   °F  to °C  is   :"<<cl<<endl;
 }
};

 int  main (){
    float  c ,f;
     cout<<"Enter the following DATA : \n";


     check c1;
     cout<<"Enter celsius  °C :";
     cin>>c;
    
     c1.setdata (c,0) ;
     c1.getdata1();

     check c2;
     cout<<"Enter Fahrenheit  °F :";
     cin>>f;
     c2.setdata(0,f);
     c2.getdata2();
     
     return 0;
 } 