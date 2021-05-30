#include <iostream>
using namespace std;

int main()
{
    int x = 8;
    float y = 9;
    float div = x / y;
    cout << div << endl;
    // to get a float result for the above one
    // one of the operandes needs to be a float type
    // and even the result var need to be float
    // else will store the float value to int
    int pro = x * y;
    cout << pro << endl;

    float u = 8;
    int v = 4;
    u += 2; // adds 2 to the value of variable
    u++;    // adds 1 to the variable
    u--;    // subtracts 1 from the variabe
    u += y; // adds the value of y to the value of x
    cout << x << endl;

    // precedence of the operator
    // BEDMAS
    // Division and multiplication have same
    // level of precedence
    // 2 * 5 / 2
    int sum = (x + y) - x * 7 / 3 * 2;

    // Modulas operator: returns the remainder
    // cannot be used on different type operands
    // like int and float
    // floats cannot be used in the modulas operator
    int a = 3;
    int b = 7;
    cout << a % b;
}

/*
+ - / * ++ -- %
*/