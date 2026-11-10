//Take a character input and print its ASCII value
#include<iostream>
using namespace std ;
class check {
    private:
     char ch;
    public:
    void setdata(char c){
  ch =c;
     display();
    }
    void display(){
    cout<<"The ASCII of the given charecter   is :"<<(int) ch<<endl;
    }

};

int main (){
 char c;

 cout<<"Enter the following charecter : ";
    cin>>c;
     check c1;
     c1.setdata(c);


    return 0;

}