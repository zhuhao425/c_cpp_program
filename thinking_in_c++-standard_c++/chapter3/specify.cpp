#include <iostream>

using namespace std;

int main()
{
    char c;
    unsigned char cu;
    int i;
    unsigned int iu;
    short int is;
    short iis;
    unsigned short int isu;
    unsigned short iisu;
    long int i1l;
    long iil;
    unsigned long int ilu;
    unsigned long iilu;
    float f;
    double d;
    long double ld;

    cout << "char = " << sizeof(c) << endl
         << "unsigned char = " << sizeof(cu) << endl
         << "int = " << sizeof(i) << endl
         << "unsigned int = " << sizeof(iu) << endl
         << "short = " << sizeof(is) << endl
         << "unsigned short = " << sizeof(isu) << endl
         << "long = " << sizeof(iil) << endl
         << "unsigned long = " << sizeof(ilu) << endl
         << "float = " << sizeof(f) << endl
         << "double = " << sizeof(d) << endl
         << "long double = " << sizeof(ld) << endl;
    return 0;
}