#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Size: " << v.size() << endl;         // 0
    cout << "Max size: " << v.max_size() << endl; // 2305843009213693951
    cout << "Capacity: " << v.capacity() << endl; // 0

    // 1
    v.push_back(10);
    cout << "Size: " << v.size() << endl;         // 1
    cout << "Capacity: " << v.capacity() << endl; // 1

    // 2
    v.push_back(20);
    cout << "Size: " << v.size() << endl;         // 2
    cout << "Capacity: " << v.capacity() << endl; // 2

    // 3
    v.push_back(30);
    cout << "Size: " << v.size() << endl;         // 3
    cout << "Capacity: " << v.capacity() << endl; // 4

    // 4
    v.push_back(40);
    cout << "Size: " << v.size() << endl;         // 4
    cout << "Capacity: " << v.capacity() << endl; // 4

    // 5
    v.push_back(50);
    cout << "Size: " << v.size() << endl;         // 5
    cout << "Capacity: " << v.capacity() << endl; // 8

    // 6
    v.push_back(60);
    cout << "Size: " << v.size() << endl;         // 6
    cout << "Capacity: " << v.capacity() << endl; // 8

    // 7
    v.push_back(70);
    cout << "Size: " << v.size() << endl;         // 7
    cout << "Capacity: " << v.capacity() << endl; // 8

    // 8
    v.push_back(80);
    cout << "Size: " << v.size() << endl;         // 8
    cout << "Capacity: " << v.capacity() << endl; // 8

    // 9
    v.push_back(90);
    cout << "Size: " << v.size() << endl;         // 9
    cout << "Capacity: " << v.capacity() << endl; // 16

    // print the elements of vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.clear();                // O(N)
    cout << v.size() << endl; // 0

    // after clear size is 0. but values still exists
    for (int i = 0; i < 9; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.push_back(100);

    // start pushing from the start, replacing the existing values
    for (int i = 0; i < 9; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.clear();
    cout << v.empty() << endl; // 1 (if the vector is empty)
    cout << v.size() << endl;  // 0

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.resize(2); // now size is 2
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.resize(4); // now size is 4, extra spaces are filled with 0
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.resize(5, 100); // now size is 5 and extra spaces are filled with 100
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}