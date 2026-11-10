// WAP using constructer and find volume of the box .
#include<iostream>
using namespace std;
class box{

    private :
    int length;
    int breadth;
    int height;
   int z;
    public :
    box(int l , int b, int h){
        length =l;
        breadth =b;
        height =h;

    }
    
    void display(){
      
        z= length * breadth* height ;
        cout<<"The final volume of box is :"<<z<<endl;

    }



};
 int main (){
     int l,b,h;
     cout<<"Enter the following data :\n";
  cout<<"Enter the length of box to find volume :";
  cin>>l;
cout<<"Enter the breadth of box to find volume :";
  cin>>b;
  cout<<"Enter the height  of box to find volume :";
  cin>>h;
  
  box b1 (l,b,h);
  b1.display();
    return 0;

 }