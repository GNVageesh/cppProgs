#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int &b = a; // if b is modified, then a is also changed

    // if a is changed b will also change;
    a = 3;
    b = 10;

    cout << a << endl;
    cout << b << endl;
}