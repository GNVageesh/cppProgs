#include <iostream>
using namespace std;

int main()
{
    // not operator
    // !true  --> false
    // !false --> true
    bool x = !true;

    // and operator
    // true true --> true
    // true false --> false
    // false false --> false
    bool y = true && false;

    // or operator
    // true true --> true
    // true false --> true
    // false false --> false
    bool z = true || false;

    bool test = !(!false || !!true) && true;
    cout << test << endl;

    // !! is itself --> !!true is true
    // !(false || !true) will result in
    // (!false && !!true) will further result in
    // (true && true) which is true
}

/*
&& -> and
|| -> or
!  -> not
*/