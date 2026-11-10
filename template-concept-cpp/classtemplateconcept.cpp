#include<iostream>
using namespace std;
template<class T >

class check {
    protected :
    T a,b,sum;
   public :

    void setdata( T a1 , T a2){
        a=a1;
        b=a2;
    }

    void sum1 (){
       
        sum = a+b;

    }
    void display (){
        cout<<"The sum of two number is :"<<sum<<endl;

    }
};

int main (){

     check <int> c;
     c.setdata(10,25);
     c.sum1();
     c.display();

     cout<<"in terms of float "<<endl;
     check <float> c1;
     c1.setdata(1.0,2.5);
     c1.sum1();
     c1.display();

     return 0;

}