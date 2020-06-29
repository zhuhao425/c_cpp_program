#include <iostream>

using namespace std;

union Packed
{
    char i;
    short j;
    int k;
    long l;
    float f;
    double d;
};

int main()
{
    cout << "sizeof(Packed): " << sizeof(Packed) << endl;
    Packed x;
    x.i = 'c';
    cout << x.i << endl;
    x.d = 3.1415926;
    cout << x.d << endl;
    cout << x.i << endl;
    return 0;
}