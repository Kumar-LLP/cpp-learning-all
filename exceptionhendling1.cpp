#include<iostream>//exceptionhendling
using namespace std ;
int main (){
 int a,b,x ,z;
 cout<<"Enter the value of a :";
 cin>>a;
  cout<<"Enter the value of b :";
 cin>>b;

 x = a-b;

try {
 if(x != 0){
     z=a/x;
    cout<<"the final calculation is :"<<z<<endl;
 }
else {
    throw(x);
}
}
catch( int i){
cout<<"Exception handled :"<<i<<endl;

}
cout<<"Program Terminate : ";
    return 0;
}