#include<iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    try {
        if (a > b && a > c) {
            throw a;   // throw int
        }
        else if (b > a && b > c) {
            throw b;   // throw int
        }
        else {
            throw c;   // throw int
        }
    }
    catch (int i) {
        cout << "The greater number is: " << i << endl;
    }

    return 0;
}