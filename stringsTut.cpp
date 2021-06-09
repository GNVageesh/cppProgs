#include <iostream>
using namespace std;

int main()
{
    string str = "Hello World";
    cout << str[1] << endl; // prints 'e'

    str[1] = 'o';        // must be a character type value to add to a string
    cout << str << endl; // changes 'e' to 'o'

    cout << str.length() << endl; // prints the length of the string
    cout << str.size() << endl;   // also prints the length

    // loop thr a string
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        cout << ch << " ,";
    }
}