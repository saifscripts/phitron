#include <iostream>
using namespace std;

void fun(int *&p, int *z)
{
    p = z;                                 // here p is same pointer from main function. and its now pointing to the address of z
    cout << "Inside Main: " << *p << endl; // print the value of z
}

int main()
{
    int x = 10;
    int y = 20;
    int z = 30;
    cout << x << " " << y << " " << z << endl; // print initial value of x, y, z

    int *p = &x;                               // pointer points to the address of x
    *p = 100;                                  // change the value of x
    cout << x << " " << y << " " << z << endl; // print updated value of x

    p = &y;                                    // same pointer now points to the address of y
    *p = 200;                                  // change the value of y
    cout << x << " " << y << " " << z << endl; // print updated value of y

    fun(p, &z);                                // inside function same pointer receives and points to the address of z
    *p = 300;                                  // change the value of z (as p is now pointing to the address of z)
    cout << x << " " << y << " " << z << endl; // print updated value of z

    return 0;
}