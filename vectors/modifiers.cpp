#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    // fill the vector with 10 five times
    v.assign(5, 10);
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];

    // removing the last element of the vector
    v.pop_back();
    cout << "\nThe elements of the vector are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // insert 5 in the beginning
    v.insert(v.begin(), 5);
    cout << "\nThe first element of the vector is: " << v[0];

    // removes the first element of the vectors
    v.erase(v.begin());

    // inserts at the beginning of the vector
    v.emplace(v.begin(), 5);
    cout << "\nThe first element of the vector is: " << v[0];

    // inserts the value of x at the end;
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element of the vector is: " << v[n - 1];

    // erases or clears the vector
    v.clear();
    cout << "\nVector size after the erase is: " << v.size();

    // two vectors to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for (auto i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << "\n\nVector 2: ";
    for (auto i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    // swapping values of vectors
    v1.swap(v2);

    cout << "\n\nVector 1 After the swap: ";
    for (auto i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << "\n\nVector 2 After the swap: ";
    for (auto i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
}