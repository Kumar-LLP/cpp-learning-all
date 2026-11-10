#include<iostream>
using namespace std;

class distance_with_meter;

class distance_with_centimeter{
private:
    int distance;

public:
    void setdata(int d){
        distance = d;
    }

    friend class distance_with_meter;
};

class distance_with_meter{
public:
    void convert(distance_with_centimeter obj){
        float meter = obj.distance / 100.0;
        cout<<"Distance in meter = "<<meter<<endl;
    }
};

int main(){

    int d;
    cout<<"Enter distance in cm : ";
    cin>>d;

    distance_with_centimeter d1;
    d1.setdata(d);

    distance_with_meter m1;
    m1.convert(d1);

    return 0;
}