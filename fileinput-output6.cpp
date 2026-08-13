#include<iostream>
#include<cstring>
#include<fstream>
using namespace std ;
class employee {
private :
 string name ;
 int employee_id;
  int age ;
  float salary;

  public:
  void setdata( string nm , int id , int ag, float sl){
    name=nm;
    employee_id = id;
    age = ag;
    salary = sl;
  }

  void display(){
    cout<<"Name :"<<name<<endl;
    cout<<" Emplyee ID :"<<employee_id<<endl;
    cout<<"Age :"<<age<<endl;
    cout<<"Salary  : "<<salary<<endl;
  }

  void save (ofstream &fout){
     fout<<"Name :"<<name<<endl;
    fout<<" Emplyee ID :"<<employee_id<<endl;
    fout<<"Age :"<<age<<endl;
    fout<<"Salary  : "<<salary<<endl;
  }
};
int main (){
 employee e[100];
string name ;
 int employee_id;
  int age ;
  float salary;
  int i , num ;

ofstream  fout;
fout.open("check.txt");

  cout<<"Enter the total number of employee :";
cin>>num;
cin.ignore();
for(i=0 ; i<num ; i++){
    cout<<"The details of "<<i+1<< " employee "<<endl;
   cout<<"Enter the name of employee :";
   getline(cin, name);
  //  cin.ignore();

   cout<<"Enter the Id of  emplyee :";
   cin>>employee_id;
   cin.ignore();


    cout<<"Enter the age of the employee :";
   cin>>age;
   cin.ignore();


   cout<<"Enter the salary of the employee :";
   cin>>salary;
   cin.ignore();
e[i].setdata(name ,employee_id , age , salary);
e[i].save(fout);

}
fout.close();

ifstream fin;
fin.open("check.txt");

int em_id;
cout<<"Enter the employee id :";
cin>>em_id;

while (fin>>name , employee_id,age,salary){
 if(employee_id == em_id){

     fout<<"Name :"<<name<<endl;
    fout<<" Emplyee ID :"<<employee_id<<endl;
    fout<<"Age :"<<age<<endl;
    fout<<"Salary  : "<<salary<<endl;

 }

}
fin.close();
    return 0;
}
