#include<iostream>
#include<string>
using namespace std ;

class information {
    private :
 string name; 
 string  address;
public:
void setdata( string nam, string  add){
name = nam;
address = add;
}
void display (){
    cout<<"Name :"<<name<<endl;
    cout<<"Address :"<<address<<endl;
}
};
int main (){
information i1 , i2;
string name ;
string address ;

cout<<"Enter the details of student :\n";
cout<<"Enter the name of students :" ;
getline(cin , name);

cout<<"Enter the address of the students :";
getline(cin , address);

// cin.ignore();  remove the unwanted line in cpp code .

cout<<" student 1 \n";
i1.setdata(name , address );
i1.display();



cout<<"Enter the details of student :\n";
cout<<"Enter the name of students :" ;
getline(cin , name);

cout<<"Enter the address of the students :";
getline(cin , address);


cout<<" student 2 \n";
i2.setdata(name , address );
i2.display();

cout<<"Now swapping the following object :\n";
information temp;
temp=i1;
i1=i2;
i2=temp;

cout<<"After seapped :\n";
cout<<" student 1 \n";
i1.display();

cout<<" student 2 \n";
i2.display();

    return 0;
}