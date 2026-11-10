#include<iostream>
using namespace std ;
int main (){
    float acc_blnc;
    float withdraw_blnc;

    cout<<"Enter the following data :"<<endl;
    cout<<"Enter the actual balance :";
    cin>>acc_blnc;
    cout<<"Enter the withdraw balance :";
    cin>>withdraw_blnc;

    cout<<"Your total balance is :"<<acc_blnc<<endl;

    try{
        if(withdraw_blnc >0 && withdraw_blnc <= acc_blnc ){
            throw withdraw_blnc;

        }
        else if(withdraw_blnc  >  acc_blnc){
            throw string("invalid ");

        }
        else {
            throw 404 ;
        }
    }

    catch ( float i ){
        cout<<"The final is :"<<i<<endl;
    }
    catch (string& s ){
        cout<<s<<endl;
    }
    catch(...){
        cout<<"operation failed ...";
    }
    return 0;
}