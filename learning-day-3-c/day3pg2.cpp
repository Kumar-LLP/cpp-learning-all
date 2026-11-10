//Calculate the area of a circle
#include<iostream>
using namespace std;
#define PI 3.14
class check{
private:
float radius ;
  float ar;
public :

void setdata (float r){
    radius = r;
}
 
void calculation(){
    ar= PI *  radius * radius  ;
}
void display(){
    cout<<"The final area of circle is :"<<ar<<endl;
}


};
int  main (){
    int r;

    cout<<"Enter the following data :\n";

    check c1;
cout<<"Enter the following value of radius :";
cin>>r;
c1.setdata(r);
c1.calculation();
c1.display();

    return 0;

}
