#include <iostream>
#include <cwchar>   // For wide character support

using namespace std;

int main()
{
    /*
     * wchar_t array is used instead of a pointer.
     * The string is stored in writable memory (RAM),
     * not in read-only memory.
     */

    wchar_t wide_string[] = L"Embedded Systems";
    wchar_t wide_char = L'Ω';

    wcout << L"Wide character: " << wide_char << endl;
    wcout << L"Wide string   : " << wide_string << endl;

    cout << "\n--- Size Information ---\n";
    cout << "Size of char      : " << sizeof(char) << " byte\n";
    cout << "Size of wchar_t   : " << sizeof(wchar_t) << " bytes\n";
    cout << "Size of array     : "
         << sizeof(wide_string) / sizeof(wchar_t)
         << " characters\n";

    return 0;
}
