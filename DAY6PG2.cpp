#include<iostream>
using namespace std;
 class check {
private :
int num;

public :
void setdata(int n){
    num = n ;
    
}

void display1(){
    cout<<"The number is even  that is "<<num<<endl;
}

void display2(){
    cout<<"The number is odd  that is "<<num<<endl;
}

 };
int main(){

    int n;
cout<<"Enter any number to check even and odd :";
cin>>n;
check c1;
 c1.setdata(n);
if(n%2==0){
     c1.display1();
}
else{
    c1.display2();
}
    return 0;
}
