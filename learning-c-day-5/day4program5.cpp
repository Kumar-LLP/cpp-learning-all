#include<iostream>

using namespace std;

class employee{

private :
     string name;
  string address ;
  int age ;
  float salary ;
int i;

 public:
      void setdata ( string  nm, string add, int a, int sal){
   name = nm; 
   address = add;
   age= a;
   salary = sal;
}   
 
void display (){
cout<<"Name :"<<name<<endl;
cout<<"Adress :"<<address<<endl;
cout<<"Age:"<<age<<endl;
cout<<"Salary :"<<salary<<endl;
}



};
int main (){
    int i;
int n;
string nm;
string add;
int a;
float sal;

cout<<"Enter the total number of employee :",n+1;
cin>>n;

employee e1[15];
for ( i=0; i<n;i++){
   cout<<"Enter the name of employee :";
cin>>nm;
cout<<"Enter the address  of employee :";
cin>>add;
cout<<"Enter the age  of employee :";
cin>>a;
cout<<"Enter the salary  of employee :";
cin>>sal; 
e1[i].setdata(nm,add,a,sal);
e1[i].display();
}
    return 0;
}