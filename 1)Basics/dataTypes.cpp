/*******************************************************************************************
 * TOPIC : Data Types
*********************************************************************************************/

#include <iostream>
#include <climits>
#include <cfloat>
#include <string>

using namespace std;

int main() {

    // Character
    char ch = 'A';

    // Boolean
    bool isPassed = true;

    // Integer types
    short int si = 10;
    int i = 100;
    long int li = 10000;
    long long int lli = 1000000;

    // Signed & Unsigned
    signed int s = -50;
    unsigned int ui = 50;

    // Floating-point types
    float f = 12.5f;
    double d = 123.456;
    long double ld = 12345.6789;

    // Pointer
    void* ptr = nullptr;

    // String input
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "\nDATA TYPE\t\tVALUE\t\tSIZE\t\tMIN\t\t\tMAX" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;

    cout << "char\t\t\t" << ch << "\t\t" << sizeof(ch) << "\t\t" << CHAR_MIN << "\t\t\t" << CHAR_MAX << endl;

    cout << "bool\t\t\t" << isPassed << "\t\t" << sizeof(isPassed) << "\t\t" << false << "\t\t\t" << true << endl;

    cout << "short int\t\t" << si << "\t\t" << sizeof(si) << "\t\t" << SHRT_MIN << "\t\t\t" << SHRT_MAX << endl;

    cout << "int\t\t\t" << i << "\t\t" << sizeof(i) << "\t\t" << INT_MIN << "\t\t" << INT_MAX << endl;

    cout << "long int\t\t" << li << "\t\t" << sizeof(li) << "\t\t" << LONG_MIN << "\t\t" << LONG_MAX << endl;

    cout << "long long int\t\t" << lli << "\t\t" << sizeof(lli) << "\t\t" << LLONG_MIN << "\t" << LLONG_MAX << endl;

    cout << "unsigned int\t\t" << ui << "\t\t" << sizeof(ui) << "\t\t0\t\t\t" << UINT_MAX << endl;

    cout << "float\t\t\t" << f << "\t\t" << sizeof(f) << "\t\t" << FLT_MIN << "\t\t" << FLT_MAX << endl;

    cout << "double\t\t\t" << d << "\t\t" << sizeof(d) << "\t\t" << DBL_MIN << "\t\t" << DBL_MAX << endl;

    cout << "long double\t\t" << ld << "\t\t" << sizeof(ld) << "\t\t" << LDBL_MIN << "\t\t" << LDBL_MAX << endl;

    cout << "string\t\t\t" << name << "\t\t" << sizeof(string) << "\t\tN/A\t\t\tN/A" << endl;

    cout << "void*\t\t\t" << ptr << "\t\t" << sizeof(ptr) << "\t\tN/A\t\t\tN/A" << endl;

    return 0;
}
