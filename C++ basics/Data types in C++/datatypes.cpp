#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    uint16_t ushort_val = 56;
    int16_t  short_val  = -6;
    int32_t  int_val    = 99916543;
    int64_t  long_val   = 456789;
    int64_t  long_long_val = 9991654321;
    int8_t   int8_val   = 2;

    cout << "Unsigned short int: " << ushort_val << endl;
    cout << "Signed short int  : " << short_val << endl;
    cout << "Int               : " << int_val << endl;
    cout << "Long int          : " << long_val << endl;
    cout << "Long long int     : " << long_long_val << endl;
    cout << "int8_t value      : " << static_cast<int>(int8_val) << endl;

    cout << "\n--- Size Information ---\n";
    cout << "Size of short      : " << sizeof(short) << " bytes\n";
    cout << "Size of int        : " << sizeof(int) << " bytes\n";
    cout << "Size of long       : " << sizeof(long) << " bytes\n";
    cout << "Size of long long  : " << sizeof(long long) << " bytes\n";
    cout << "Size of int8_t     : " << sizeof(int8_t) << " bytes\n";

    return 0;
}
