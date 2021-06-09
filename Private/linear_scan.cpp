#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num, pos;
    bool result = false;

    cout << "Enter the number to search: ";
    cin >> num;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == num)
        {
            pos = i;
            result = true;
        }
    }

    if (result == true)
    {
        cout << num << " was found at index " << pos;
    }
    else
    {
        cout << "The number " << num << " was not found in the array." << endl;
    }
}