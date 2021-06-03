#include <iostream>

int main()
{
    int x[] = {5, 6, 7, 8, 9, 10, 20, 30, 40};

    // displaying every value of the array
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        std::cout << x[i] << " ";
    }
}