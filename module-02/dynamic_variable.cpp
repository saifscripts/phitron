#include <iostream>
using namespace std;

int *q;
int *r;

void fun1()
{
    int x = 100;
    q = &x;
    return;
}

void fun2()
{
    int *x = new int;
    *x = 1000;
    r = x;
    return;
}

int main()
{
    // static variable (stored in stack memory)
    int x = 5;

    // dynamic variable (stored in heap memory)
    int *p = new int; // new int returns address of the heap memory
    *p = 22;
    cout << *p << endl;

    // dynamic variable can be deleted
    delete p;
    cout << *p << endl; // garbage value

    // after returning from function, static variable gets vanished
    fun1();
    cout << *q << endl; // cant get the value of *q here (try in online compiler)

    // after returning from function, dynamic variable still remains in heap memory
    fun2();
    cout << *r << endl; // can get the value of *r here

    return 0;
}