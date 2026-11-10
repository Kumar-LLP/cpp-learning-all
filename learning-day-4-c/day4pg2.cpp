//Take a number and print its type using typeid.
#include<iostream>
#include<typeinfo>
using namespace std;

class check {
private :
int num;

public:
void setdata(int n){
    num=n;
}

void final(){
cout<<"The type using typeid is : "<<typeid(num).name()<<endl;
}


};
 int main (){
    int n;
    cout<<"ENter any number :";
    cin>>n;

    check c1;
    c1.setdata(n);
     c1.final();
    return 0;
 }