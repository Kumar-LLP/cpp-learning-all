//fileinput-output6.cpp
#include<iostream>
#include<fstream>
#include<cstring>
#include<cctype>
using namespace std ;
class content{
    private :
    string text1 ;

    public :
    void setdata( string txt1){

        text1 = txt1;
    }

    void display (){

        cout<<"THE OUTPUT IS :" <<text1<<endl;
    }
    void save ( ofstream &fout){
     fout<<"THE OUTPUT IS :" <<text1<<endl;
    }
};
int main (){
content c;
   ofstream fout("source.txt");
 string text1 ;
 cout<<"Enter any sentence and text :"<<endl;
 getline(cin,text1);
 c.setdata(text1);
c.display();
 
c.save(fout);
fout.close();

 ifstream fin("source.txt");
 ofstream fout1("destination.txt");
char ch ;
while(fin.get(ch)){
fout1.put((char)toupper(ch));
}
 fout1.close();
 fin.close();
    return 0;
}
