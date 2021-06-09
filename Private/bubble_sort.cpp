#include <iostream>
using namespace std;

int main()
{
    int arr[] = {34, 54, 7, 32, 65, 3421, 46, 231, 56, 3, 5443, 45, 34, 45, 34};
    int len = sizeof(arr) / sizeof(arr[0]);
    int ori[len];

    for (int i = 0; i < len; i++)
    {
        ori[i] = arr[i];
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }

    cout << "The Original array was: " << endl;

    for (int i = 0; i < len; i++)
    {
        cout << ori[i] << " ";
    }

    cout << endl; // the goto the next line

    cout << "The sorted array in ascending order is: " << endl;

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}