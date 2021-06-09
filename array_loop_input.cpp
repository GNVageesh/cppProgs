#include <iostream>
using namespace std;

int main()
{
    int x[5];                           // an array with 5 elements
    int len = sizeof(x) / sizeof(x[0]); // array length

    for (int i = 0; i < len; i++)
    {
        cout << "Enter a number: " << endl; // input option
        cin >> x[i];                        // store the input in the array at pos i
    }

    for (int i = 0; i < len; i++)
    {
        cout << x[i] << " "; // display array
    }
}