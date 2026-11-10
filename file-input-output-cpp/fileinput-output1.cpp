//fileinput-output2.cpp
#include<iostream>
#include<fstream>
 #include<cstring>

 using namespace std ;

class book {
    private :
    string booknm;
    string publication;
    float price ;
public:
book(){
}
book(string book1 , string pub  , float pri){
    booknm = book1 ;
    publication = pub;
    price = pri ;

}

void display (){
    cout<<"============================"<<endl;
    cout<<"Book :"<<booknm<<endl;
    cout<<"publication :"<<publication<<endl;
    cout<<"price :"<<price<<endl;
     cout<<"============================"<<endl;
}

void save( ofstream &fout){
    fout<<"Book name :"<<booknm<<endl;
    fout<<"publication :"<<publication<<endl;
    fout<<"price :"<<price<<endl;
}
};
 int main (){


   ofstream fout("book.txt");


string booknm;
    string publication;
    float price ;
int i,num;
 book b[100];
    cout<<"Enter no of books  only upto 100 :";
    cin>>num;
    cin.ignore();
    cout<<"Enter the following details ..\n";
    for(i=0 ; i<num ; i++){


     cout<<"Enter Book Name :";
     getline(cin,booknm);
   
     cout<<"Enter Book publication :";
     getline(cin,publication);
     
      cout<<"Enter Book price :";
      cin>>price;
      cin.ignore();
    b[i] = book(booknm, publication, price);
    b[i].save(fout);
    }
    fout.close(); 
for(i=0 ; i<num ; i++){
 b[i].display();
}
ifstream fin("book.txt");
    string line;

    while(getline(fin,line))
    {
        cout<<line<<endl;
    }

    fin.close();


    return 0;
 }