#include <iostream>
using namespace std;

int main()
{
    int x = 2;

    // if statements
    if (x < 7)
    {
        cout << "x is less than 7" << endl;
        cout << "x is less than 7" << endl;

        if (x < 3)
        {
            cout << "x is less than 3" << endl;
        }
    }

    // else
    int n;
    cin >> n;

    // if n == 10 then if will run
    if (n == 10 || n == 9)
    {
        cout << "This is my fav number" << endl;
    }
    // if n < 5 then this runs
    else if (n < 5)
    {
        cout << "x is less than 5" << endl;
    }
    else if (n == 1)
    {
        cout << "x is 1" << endl;
    }
    // if n != 10 then else will run
    else
    {
        cout << "My fav number is 10" << endl;
    }

    cout << "Run" << endl; // runs without or with conditions

    // else statement is optional but atleast 1
    // if statement is required
    // even else if require atleast one if statement
    // above it

    // first if runs then if the condition is not
    // met then the next else if provided runs
    // if none of the conditions are met then
    // the else statement runs
}