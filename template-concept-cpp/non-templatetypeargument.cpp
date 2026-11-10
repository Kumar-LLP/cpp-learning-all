#include<iostream>
using namespace std ;

template< int N >

class check {
public :

void show(){
    cout<<"The final value is :"<<N;
}
};

int main (){


check<50> c;

c.show();

    return 0;
}