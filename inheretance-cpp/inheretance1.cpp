#include<iostream>
using namespace std ;

class animal {
    public :
    void check (){
        cout<<"My favroite animal is cow ."<<endl;
    }
};

class cow :public animal {
    public:
    void eat (){
  cout<<"Cow eat's grass .";
    }

};

int main (){

cow c;
c.check();
c.eat();



    return 0;

}