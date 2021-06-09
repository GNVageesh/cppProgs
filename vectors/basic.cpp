#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    // Returns an iterator pointing to the first element in the vector
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of cbegin and cend: ";
    // Returns an iterator pointing to the theoretical element that follows the last element in the vector
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";

    //Returns the number of elements in the vector.
    cout << "\nSize or length of the vector: " << g1.size();

    // Returns the maximum number of elements that the vector can hold.
    cout << "\nMax size of the array: " << g1.max_size();

    // Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    cout << "\nCapacity of the vector is: " << g1.capacity();

    // Resizes the container so that it contains ‘n’ elements.
    cout << "\nResizeing the vector from 5 to 4...";
    g1.resize(4);
    cout << "\nResized vector length is: " << g1.size();

    // Returns whether the container is empty.
    if (g1.empty() == false)
    {
        cout << "\nThe vector is not empty";
    }
    else
    {
        cout << "\nThe vector is empty";
    }

    // Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}