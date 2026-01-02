#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    float y = 12.5;

    float z = true + x + false + y;

    cout << "Result: " << z << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;  //size of bool is one byte , true means 1 and false means 0.

    return 0;
}
