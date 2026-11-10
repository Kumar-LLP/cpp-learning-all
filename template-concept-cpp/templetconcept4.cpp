// overloading with function in template(cpp)
#include<iostream>
#include<cstring>

using namespace std ;

template<class  T>
T greater1 (T a , T b){
    if(a>b){
        return a ;

    }
    else {
        return b;
    }
}

const char* greater1 ( const char* a ,  const char* b){
if(strcmp(a,b)>0){
    return a;

}
else {
    return b;
}

}

int main (){
    cout<<"The comparision is "<<greater1(10,20)<<endl;
    cout<<"The comparision is "<<greater1("A","B")<<endl;

    return 0;
}