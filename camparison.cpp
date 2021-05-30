#include <iostream>
using namespace std;

int main()
{
    // always returns a true or false values
    bool test = 1 < 2; // retuns true or 1
    cout << test << endl;
    test = 1 > 2; // return false or 0
    cout << test << endl;

    // we get 1 or 0 because cout returns the
    // numeric forms of the data
    // true  -> 1
    // false -> 0

    test = 1 >= 1;
    // return 1 or true coz 1 is greater than
    // or EQUAL to 1

    // = is used to assign value
    // == is used to check if the two operands are equal
    test = 1 == 1; // returns 1 coz 1 is 1
    test = 1 != 1; // returns 0 coz 1 is 1

    cout << test << endl;

    // character comparision
    bool cTest = 'a' == 'A';
    // returns false
    // coz lower case a != uppercase A

    cTest = 'a' < 'b';
    // returns true
    // coz ASCII code of a is less than b
    // 97 < 98
    // A ---> 65
    // B ---> 97

    cTest = 'a' < 'B';
    // returns false
    // because a(97) > B(66)

    // String comparison
    bool sTest = "Hello" == "hEllo";
    // returns false
    // coz H is cap and E is cap
    cout << sTest << endl;

    sTest = "hello " == "hello";
    // returns false coz space is there

    int num1, num2;
    cout << "Type number 1: " << endl;
    cin >> num1;
    cout << "Type number 2: " << endl;
    cin >> num2;
    sTest = num1 == num2;
    cout << "These 2 nums are the same: " << sTest << endl;
}

/*
< > <= >= != ==
*/