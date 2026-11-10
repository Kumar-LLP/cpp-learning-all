#include<iostream>
using namespace std ;

template< class T ,class T1 , class T2 , class T3>
class check {
    protected :
    T avg ;
    T1 a;
     T2 b;
    T3 c ;

public:
void setdata( T1 a1 , T2 a2 , T3 a3){
   a=a1;
   b =a2;
   c= a3;
}
   void calculation (){
   avg =(a+b+c)/3;
   }

};

template< class T ,class T1 , class T2 , class T3>

class check1: public check <T , T1, T2, T3> {
    public :

   void display (){

    cout<<"The average number is :"<< this->avg<<endl;
   }
};

int main (){
int a,b,c;
cout<<"Enter the details :"<<endl;

cout<<"Enter the number a :";
cin>>a;

cout<<"Enter the number b :";
cin>>b ;

cout<<"Enter the number c :";
cin>>c;

check1 < float ,int, int , int > c1;

c1.setdata(a, b, c);
c1.calculation();
c1.display();

    return 0;
}