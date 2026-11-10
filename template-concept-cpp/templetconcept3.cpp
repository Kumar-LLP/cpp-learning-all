// FInding the subtract of two number >

#include<iostream>
using namespace std ;

template<class T>

T check(T a , T b){

    return  a-b;

}

int main (){

int x = check(50,100);
cout<<"The diffrence  of two number is :"<<x<<endl;

    return 0;
}