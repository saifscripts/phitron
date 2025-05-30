#include<iostream>
using namespace std;

int main ()

{
    // single input & output
    int x;
    cin >> x;
    cout << x << endl;


    // multiple input & output
    int a;
    char b;
    double c;
    cin >> a >> b >> c;
    cout << a << endl << b << endl << c << endl;

    // print the ascii value of a character
    char p = 'A';
    int q = p;
    cout << q << endl;

    // print the ascii value of a character (type cast)
    char m = 'A';
    cout << int(m) << endl;
    
    // type cast int to char
    int y = 65;
    cout << char(y) << endl;

    return 0;
}