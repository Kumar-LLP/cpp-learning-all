#include<iostream>
using namespace std;
class check {
private :
int a,b;

public :
int c ;
void setdata(int a1, int b1){
    a=a1;
    b=b1;

}
check operator +(){

c=a+b;
return *this; // THIS is the pointer method where we should't have to create extra class .

}
void display (){
    cout<<"number become :"<<c<<endl;

}
};
int main (){
    int a,b;
cout<<"enter the vale of a and b :";
cin>>a>>b;
check c;
c.setdata(a,b);
  +c;
c.display();

    return 0;
}
