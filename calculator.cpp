#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    std::cout << "Enter 1st number" << std::endl;
    cin >> num1;
    cout << "Enter 2nd number" << endl;
    cin >> num2;

    int sumOfNumbers = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sumOfNumbers;
    return 0;
}