#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    for (int i = 1; i <= 10; i++)
    {
        vec.push_back(i * 10);
    }

    // Returns the position element at g[x]
    cout << "\nReference operator [vec]: vec[2] = " << vec[2]; // 10 20 30
    cout << "\nat : vec.at(4) = " << vec.at(4);

    // Returns the first element of the vectors
    cout << "\nfront(): vec.front() = " << vec.front();

    // Returns the last element of the vector
    cout << "\nback(): vec.back() = " << vec.back();

    // Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    int *pos = vec.data();

    cout << "\nThe first element of the vector is: " << *pos;
}