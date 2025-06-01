#include <bits/stdc++.h>
using namespace std;

int main()
{
    // size() // returns size of the string
    string s = "Hello World";
    cout << "Size: " << s.size() << endl;

    s = "Size is increased";
    cout << "Size: " << s.size() << endl;

    // max_size() // returns the maximum size that string can hold (different in each machine)
    cout << "Max size: " << s.max_size() << endl;

    // capacity() // returns capacity of the string (capacity is dynamically allocated and its greater than size)
    s = "Hello World";
    cout << "Capacity: " << s.capacity() << endl;

    s = "Size is increased. So Capacity should increase too";
    cout << "Capacity: " << s.capacity() << endl;

    // clear() // clears the string (so the size will be zero)
    s.clear();
    cout << s << endl;
    cout << "Size after clear: " << s.size() << endl;

    // empty() // check if the string is empty
    cout << s.empty() << endl; // 1 (string is empty)
    s = "New Value";
    cout << s.empty() << endl; // 0 (string is not empty)

    // resize() // resize the string
    cout << s << endl;
    cout << "Size: " << s.size() << endl;
    s.resize(5); // size decreased
    cout << s << endl;
    cout << "Size: " << s.size() << endl;
    s.resize(15); // size increased (filled with garbage value)
    cout << s << endl;
    cout << "Size: " << s.size() << endl;
    s.resize(20, 'X'); // size increased (filled with 0)
    cout << s << endl;
    cout << "Size: " << s.size() << endl;

    return 0;
}