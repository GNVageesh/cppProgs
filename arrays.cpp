#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int arr[]{1, 2, 3, 4, 5}; // = is optional

    // if the elements in the array are not given then
    // the number of elements should be given

    //displaying the array output --> the memory location of it
    cout << arr << endl;

    // the first element of every array is at position 0
    // the second at position 1
    cout << arr[1] << endl;

    // the last element of the array has the position
    // n-1, where n is the length of the array
    cout << arr[x - 1] << endl;

    // accessing the position that does not exist
    // the element in the array is not defined and is called
    // then the compiler will throw a random value
    cout << arr[10] << endl;

    // once the array is declaredand initialized then
    // it cannot be reinitialised or redeclared but can only be changed
    arr[0] = 2;      // but the original value at arr[0] is 1
    arr[x - 1] = 10; // but the original value at arr[x-1] is 5

    cout << arr[0] << endl;
    cout << arr[x - 1] << endl;

    int arr2[]{4, 5, 6, 7};
    string arr3[]{"gn", "vageesh", "gnvageesh"};
    float arr4[]{1.1, 2.2, 3.4};

    // length of an array in two steps
    sizeof(string); // asking the number of elements in the array
    cout << "Length is: " << sizeof(arr) / sizeof(arr[0]) << endl;
    // dividing to get the size of the array
    // bits size / size of first element = size or length of the array
}