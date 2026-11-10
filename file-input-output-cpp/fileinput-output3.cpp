#include<iostream>
#include<fstream>
 #include<cstring>

 using namespace std ;

class university {
    private :
    int rollno;
    string name ;
    string university1;

    public:
    void  setdata( int roll , string nm , string unvi){
        rollno = roll;
        name = nm ;
        university1 = unvi;
    }

    void display(){
        cout<<"============================"<<endl;
       cout<<"Rollno:"<<rollno<<endl;
       cout<<"Name :"<<name<<endl;
       cout<<"University :"<<university1<<endl;
       cout<<"============================"<<endl;
    }

void save (ofstream &fout){
    fout<<"Rollno:"<<rollno<<endl;
    fout<<"Name :"<<name<<endl;
    fout<<"University : "<<university1<<endl;
}
};
int main (){
    university u[100];
    ofstream fout ("exam.txt");
int rollno;
    string name ;
    string university1;
    int i, num ;

    cout<<"Enter the total number of student  upto 100 student  :";
    cin>>num;
   cout<<"============================"<<endl;
   for(i=0 ; i<num; i++){
   cout<<"Enter the following "<<i+1<<" details :"<<endl;
cout<<"Enter Rollno :";
cin>>rollno;
cin.ignore();

  cout<<"Enter the name of student :";
  getline(cin,name);

   cout<<"Enter the name of university :";
  getline(cin,university1);
   
  u[i].setdata (rollno, name , university1);
u[i].save(fout);

   }
    fout.close();

    for(i=0 ; i<num ; i++){
        u[i].display();
    }

    ifstream  fin("exam.txt");
     string line ;

     while(getline(cin , line)){

        cout<<line<<endl;
     }
fin.close();
return 0;
}