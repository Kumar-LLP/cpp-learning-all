#include<iostream>
using namespace std ;
template<class T>

T check (T a , T b){
    return (a+b)/2;
}
int main (){
    int x ;


  x=  check(10,20);
cout<<"The average of the two number is "<<x<<endl;

    return 0;
}