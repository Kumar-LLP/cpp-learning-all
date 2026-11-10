#include<iostream>
using namespace std ;
template< class T>
T maximum (T a , T b ){
    if(a>b){
        return a;

    }
    else {
        return b;
    }
}

int main (){

    cout<<maximum(10,20)<<endl;
  cout<<maximum(10.0,2.0)<<endl;
    return 0;
}
