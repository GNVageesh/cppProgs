#include <iostream>
using namespace std;

int main()
{
    string operation = "";
    int ch;
    float num1, num2;
    float sum, pro, diff;
    float quo;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "-------------------------" << endl;
    cout << "Enter your choice: " << endl;

    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "Addition App Started..." << endl;
        cout << " " << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        sum = num1 + num2;

        cout << "The Sum is: " << sum << endl;
        break;
    case 2:
        cout << "Subtraction App Started..." << endl;
        cout << " " << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        diff = num1 - num2;

        cout << "The Difference is: " << diff << endl;
        break;
    case 3:
        cout << "Mutliplication App Started..." << endl;
        cout << " " << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        pro = num1 * num2;

        cout << "The Product is: " << pro << endl;
        break;
    case 4:
        cout << "Division App Started..." << endl;
        cout << " " << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        quo = num1 / num2;

        cout << "The Quotient is: " << quo << endl;
        break;

    default:
        cout << "[INVALID]..." << endl;
        break;
    }
}