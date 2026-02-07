/*******************************************************************************************
 * TOPIC : Data Types
*********************************************************************************************/

#include <iostream>
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

    cout << "DATA TYPE\t\tVALUE\t\tSIZE (bytes)" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "char\t\t\t" << ch << "\t\t" << sizeof(ch) << endl;
    cout << "bool\t\t\t" << isPassed << "\t\t" << sizeof(isPassed) << endl;
    cout << "short int\t\t" << si << "\t\t" << sizeof(si) << endl;
    cout << "int\t\t\t" << i << "\t\t" << sizeof(i) << endl;
    cout << "long int\t\t" << li << "\t\t" << sizeof(li) << endl;
    cout << "long long int\t\t" << lli << "\t\t" << sizeof(lli) << endl;
    cout << "signed int\t\t" << s << "\t\t" << sizeof(s) << endl;
    cout << "unsigned int\t\t" << ui << "\t\t" << sizeof(ui) << endl;
    cout << "float\t\t\t" << f << "\t\t" << sizeof(f) << endl;
    cout << "double\t\t\t" << d << "\t\t" << sizeof(d) << endl;
    cout << "long double\t\t" << ld << "\t\t" << sizeof(ld) << endl;
    cout << "void*\t\t\t" << ptr << "\t\t" << sizeof(ptr) << endl;

    return 0;
}
