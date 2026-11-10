#include <iostream>
using namespace std;

// Function template with 2 parameters
template <class T>
T add(T a, T b)
{
    return a + b;
}

// Overloaded function template with 3 parameters
template <class T>
T add(T a, T b, T c)
{
    return a + b + c;
}

int main()
{
    cout << "Sum of 2 numbers = " << add(10, 20) << endl;
    cout << "Sum of 3 numbers = " << add(10, 20, 30) << endl;

    cout << "Sum of 2 float numbers = " << add(2.5, 3.5) << endl;
    cout << "Sum of 3 float numbers = " << add(2.5, 3.5, 4.0) << endl;

    return 0;
}