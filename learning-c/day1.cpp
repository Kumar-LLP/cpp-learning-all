#include<iostream>
using namespace std;

int main (){
    int temp,a,b;

    cout<<" Give the all possible data asked by program . "<<endl;
    cout << "Enter the value of number a: ";
 cin>>a;
 cout <<  "Enter  the  value of number b:";
 cin>>b;
 temp=a;
 a=b;
 b=temp;

 cout<<"The final swaping  of A  is : " << a<<endl;
 cout<<"The final swaping of B is : "<<b<<endl;

    return 0;

}