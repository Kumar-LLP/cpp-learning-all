#include<iostream>
using namespace std ;
 
class time {
private :
int hour;
int minutes;
int second;

public :
    time (  int hou , int min , int sec){
hour =hou;
minutes=min;
second = sec;
    }
     
    void add( time  t1, time t2){
 
     hour = t1.hour + t2 .hour ;
       minutes =t1.minutes + t2.minutes ;
      second = t1.second +t2.second;
     if(second >=60){
      minutes+=second/60;
      second=second%60;
      
     }
      
      if(minutes >=60){
      hour+=minutes/60;
      minutes=minutes%60;
      
     }
      

    }
    void display (){
 cout<<"Final hour is :"<<hour<<endl;
 cout<<"Final minutes is :"<<minutes <<endl;
 cout<<"final second is :"<<second <<endl ;

    }
};
int main (){

    int hour, minutes,second;

    cout<<"Enter the detail\n";
    cout<<"enter the hour :";
    cin>>hour;
    cout<<"Enter the minutes :";
    cin>>minutes ;
    cout<<"Enter the seconds  : ";
    cin>>second;

    time t1(hour,minutes,second) ;
     cout<<"Enter the detail\n";
    cout<<"enter the hour :";
    cin>>hour;
    cout<<"Enter the minutes :";
    cin>>minutes ;
    cout<<"Enter the seconds  : ";
    cin>>second;

    time t2(hour,minutes,second );
 time t3(0,0,0) ;

   t3.add(t1,t2);
   t3.display();
    return 0;

}
