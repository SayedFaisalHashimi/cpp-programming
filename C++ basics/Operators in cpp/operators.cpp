#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;

    // Arithmetic operators
    cout << "Arithmetic Operators\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Relational operators
    cout << "\nRelational Operators\n";
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;

    // Logical operators
    cout << "\nLogical Operators\n";
    cout << "(a > 5 && b < 5) : " << (a > 5 && b < 5) << endl;
    cout << "(a > 5 || b > 5) : " << (a > 5 || b > 5) << endl;
    cout << "!(a == b)       : " << !(a == b) << endl;

    // Assignment operators
    cout << "\nAssignment Operators\n";
    int c = a;
    c += b;
    cout << "c += b : " << c << endl;

    // Increment and Decrement
    cout << "\nIncrement / Decrement\n";
    cout << "a++ = " << a++ << endl;
    cout << "++a = " << ++a << endl;
    cout << "b-- = " << b-- << endl;
    cout << "--b = " << --b << endl;

    return 0;
}
