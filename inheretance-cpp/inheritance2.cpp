#include<iostream>
#include<string>
 using namespace std;

 class  parent1{
protected :
string name;
string address;

public :

void getdata (){
cout<<"Enter the name :"<<endl;
getline(cin, name );

cout<<"Enter the address :"<<endl;
getline(cin, address);
}
 };
 class child1 : public parent1{
    protected:
int rollno;
string  phone;
public:

void get(){
    cout<<"Enter Rollno. :"<<endl;
    cin>>rollno;
    cin.ignore();
    cout<<"Enter  phone no.:"<<endl;
    getline(cin, phone);
    
   
}
 };

 class child2 : public child1{
    protected:
    int age ;
    int price ;

    public :

void display(){
cout<<"Enter the age : \n";
cin>>age ;
cout<<"Enter the price : \n";
cin>>price;

}

void finaldisplay(){
    cout<<"name :"<<name<<endl;
    cout<<"Address"<<address<<endl;
    cout<<"roll no :"<<rollno<<endl;
    cout<<"phone :"<<phone <<endl;
    cout<<"Age :"<<age<<endl;
    cout<<"Price"<<price<<endl;
}
 };

 int main (){
 child2 c2 ;
c2.getdata();
c2.get();
c2.display();
c2.finaldisplay();

    return 0;
 }
