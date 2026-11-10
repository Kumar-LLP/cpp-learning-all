#include<iostream>
using namespace std;
class checck {
private:
int day,month,year;

public:
void setdata( int d , int m , int y){
 day=d;
 month = m;
 year =y;

}

};
int main (){
 int year , day , month ;
    cout<<"Enter the following details:"<<endl;
    cout<<"Enter you date of birth year:";
    cin>>year;
      cout<<"Enter you date of birth month:";
    cin>>month;
  cout<<"Enter you date of birth day:";
    cin>>day;

    cout<<"DOB :"<<year<<"/"<<month<<"/"<<day<<endl;
 
    try {
        if(year == 0){
            throw string("Invalid year");
        }
        else if (month == 0){
            throw string("Invalid month");

        }
        else {
            throw 404;
        }
    }

    catch( string& s ){
        cout<<s<<endl;
    }
    catch(...){
        cout<<"very good Gentalman ....";
    }
    
    return 0;
}