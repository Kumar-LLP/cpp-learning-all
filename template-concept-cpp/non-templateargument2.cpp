//WAP using non template type argument .....
#include<iostream>
#include<cstring>
using namespace std;

 char str1[] = "A";
 char str2[] = "Z";

template< int a ,int b, const char* e, const char*  f>

class check {

    public :

    void comparenumber(){
   
    if(a>b){
        cout<<"Final output  is :"<<a<<endl;
    }
    else {
        cout<<"Final output  is :"<<b<<endl;
    }
    }

    void comparenumber2(){
       if(strcmp(e,f)>0){
              cout<<"Final output  is :"<<e<<endl;
        }
        else {
        cout<<"Final output  is :"<<f<<endl;
    }
    }


};

int main (){
check <5,10,str1,str2> c;
c.comparenumber();
c.comparenumber2();
    return 0;
}