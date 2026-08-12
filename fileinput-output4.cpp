#include<iostream>
#include<fstream>
 #include<cstring>

 using namespace std ;

class university {
    private :
    int rollno;
    char name[100] ;
    char university1[100];

    public:
    void  setdata( int roll , char nm[] , char unvi[]){
        rollno = roll;
       strcpy(name ,nm);
       strcpy(university1 , unvi);

    }

    void display(){
        cout<<"============================"<<endl;
       cout<<"Rollno:"<<rollno<<endl;
       cout<<"Name :"<<name<<endl;
       cout<<"University"<<university1<<endl;
       cout<<"============================"<<endl;
    }

// void save (ofstream &fout){
//     fout<<"Rollno:"<<rollno<<endl;
//     fout<<"Name :"<<name<<endl;
//     fout<<"University"<<university1<<endl;
// }
};
int main (){
    university u[100];
   fstream file ;
int rollno;
    char name [100];
    char university1[100];
    int i, num ;

    cout<<"Enter the total number of student  upto 100 student  :";
    cin>>num;
     file.open("exam1.txt" , ios::out | ios:: binary);
   cout<<"============================"<<endl;
   for(i=0 ; i<num; i++){
   cout<<"Enter the following "<<i+1<<" details :"<<endl;
cout<<"Enter Rollno :";
cin>>rollno;
cin.ignore();

  cout<<"Enter the name of student :";
  cin>>name;
   cout<<"Enter the name of university :";
   cin>>university1;
   
  u[i].setdata (rollno, name , university1);
// u[i].save(fout);
  file.write((char*)&u[i],sizeof(u[i])); //    // Store object into file


   }
    file.close();

    // for(i=0 ; i<num ; i++){
    //     u[i].display();
    // }

    file.open("exam1.txt" , ios::in | ios::binary);
    for(i=0 ; i<num ; i++){
        file.read((char*)&u[i] , sizeof(u[i]));
        u[i].display();
    }
    file.close();
return 0;
}