#include <iostream>
using namespace std;

// Function declaration
void sumFunc(int a, int b) // A void function - is a function that returns nothing...
{
    int sum = a + b;
    cout << sum << endl;
}

int func(int x) // A non-void function - is a function that returns a data type value and is not void...
{
    int square = x * x;
    return square;
}

int main()
{
    int val = func(2);

    sumFunc(2, 10);
    cout << val << endl;
}