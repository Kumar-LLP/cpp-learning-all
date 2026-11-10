// swapping the value of two number in template by using defult argument in template  .....
#include<iostream>
using namespace std ;

template <class T, class T1 = int >    // this is the defult argument in template "class T1 = int"

class check {
   
public :
 T x;
 T1 a;
void setdata(T x1 , T1 a1 ){

    x=x1;
    a=a1;
}
 void calculation(){

 
  T temp ;
 temp=x;
 x=a;
 a=temp;

cout<<"The new value of x is :"<<x<<endl;
cout<<"The new value of a is :"<<a<<endl;

}
};
int main(){

    check<int , int >  c;
    c.setdata(30 , 20);
    c.calculation();
    return 0;

}
