#include <iostream>
#include <cmath>

// A overload function program is a code that has more than 1 same function name
// but different number or parameters or different parameter data types
// E.g: function(int a) and function(int a, int b) and function(char a)
// above the functions have the same name but different parameter ist or parameter data type

int volumn(int l, int b, int h) // volumn of a cuboid
{
    int cuboid = l * b * h;
    return cuboid;
}

int volumn(int a) // volumn of a cube
{
    int cube = a * a * a;
    return cube;
}

int volumn(double r, double h)
{
    double cynlinder = M_PI * pow(r, 2) * h;
    return cylinder;
}

int main()
{
    volumn()
}