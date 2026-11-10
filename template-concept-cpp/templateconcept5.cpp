#include<iostream>
using namespace std;

template<class T>
T check( T a , T b ){

    cout<<"The number is :"<<a<<endl;
      cout<<"The number is :"<<b<<endl;

}
template<class T>

void check (T x ,T  y, int n){
    for( int i=0;i<=n; i++){
  cout<<"The number is :"<<x<<endl;
    }
    cout<<"The number is :"<<y<<endl;
}
int main (){
check(50,10);
check(100 ,5,1);
    return 0;

}