// header file
#include<iostream>

// main function
int main () {
    // std is namespace (cout exists in std namespace)
    std::cout << "Hello World!\n";

    // print a variable
    int x = 100;
    std::cout << x << "\n";
    

    // print more variables with endl
    double d = 35.456658;
    char a = 'A';
    std::cout << d << " " << a << std::endl << x;

    return 0;
}