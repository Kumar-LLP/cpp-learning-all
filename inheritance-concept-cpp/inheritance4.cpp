//function overriding concept in cpp and  using pointer concept .
#include<iostream>
#include<iostream>
using namespace std;
class animal {
    protected:
    string name;

    public :
    void setdata(string nm){
        name= nm;
    }
    void getdata (){
        cout<<"Enter the name of any animla : ";
        getline(cin , name );
    }
    virtual void display (){
        cout<<"Name is :"<<name<<endl;

    }
};
class lion :public animal {
protected :
int legs;

public :
void set (int leg){
    legs = leg;

}
void get(){
    cout<<"enter the number of legs in the following animal  :";
    cin>>legs;

}

void display () override{
    cout<<"no of legs : "<<legs;
}

};
int main (){
    animal *ptr;
 lion l;
 ptr = &l;
 ptr ->getdata();
 l.get();
 l.animal::display();
 ptr ->display();

    return 0;
}