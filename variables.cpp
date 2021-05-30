#include <iostream>
using namespace std;

int main()
{
    // Variables
    int x, y;
    x = 7;
    x = 6;
    x = 1;
    y = 4;
    x = y; // now the value of x = y
    string s;
    s = "HELLO";
    cout << x << y << endl; // value of x at the end was 1 and not 7 or 6
    cout << s << endl;

    // Constants
    const int gravity = 9.8;
    // constants cannot be declared without initialiing it
    // const int gravity; is not allowed
    cout << gravity << endl;
}