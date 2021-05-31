#include <iostream>
using namespace std;

int main()
{
    // loops help to reduce the number of lines in a code
    // in a set number of times

    // for loops is used when we know the limit

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    // an infinite for loop
    for (;;)
    {
        cout << "Hi" << endl;
    }
}