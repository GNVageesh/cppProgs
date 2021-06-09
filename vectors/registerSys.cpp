#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main()
{
rerun:
    vector<string> val;
    ofstream Myfile("names.txt");
    string yesOrNo;
    string name;
    cout << "Welcome to the classical C++ Registration System" << endl;

    cout << "Enter your name: ";
    cin >> name;
    val.push_back(name);

    Myfile << name;

    cout << "Registered Successfully";

    cout << "\nDo you want to register again: ";
    cin >> yesOrNo;

    if (yesOrNo == "yes" || yesOrNo == "YES" || yesOrNo == "y")
    {
        goto rerun;
    }
    else if (yesOrNo == "no" || yesOrNo == "NO" || yesOrNo == "n")
    {
        exit(0);
    }
    else
    {
        cout << "\nBad input... try again";
        goto rerun;
    }
}