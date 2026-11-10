#include<iostream>
using namespace std;
class employee{
    private :
    string name;
    float salary;
    int age ;

    public:
    void setdata (string nm , float sal , int ag){
        name = nm; 
        salary = sal;
        age = ag;

    }


    void inputdata(){
         string nm;
        float sal;
        int ag;
      
          cin.ignore();
        cout<<"Enter the details of employee .\n";
        cout<<"Enter the name of enployee\n";
        getline(cin , nm );
        cout<<"Enter the salary of the employee \n";
        cin>>sal;
        cout<<"Enter the age of the employee\n";
        cin>>ag;
      setdata(nm,sal,ag);
    }

    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Salary :"<<salary<<endl;
        cout<<"Age :"<<age<<endl;

    }
};
int main (){
    int n,i;
    cout<<"Enter total number of employee:";
    cin>>n;
    
    employee e[500];
    for(i=0;i<n;i++){
     
        e[i].inputdata();
        
    }

    cout<<"========Final output ========\n";
     for(i=0;i<n;i++){
     
        e[i].display();
        
    }
    return 0;
}