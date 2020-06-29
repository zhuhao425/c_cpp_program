#include <iostream>

using namespace std;

void printBinary(const unsigned char val)
{
    for (int i = 7; i >= 0;--i)
        if(val & (1 << i))
            cout << "1";
        else
            cout << "0";
}

#define PR(STR, EXPR)  \
    cout << STR;       \
    printBinary(EXPR); \
    cout << endl;

int main()
{
    unsigned int getVal;
    unsigned char a, b;
    cout << "enter a number between 0 and 255: ";
    cin >> getVal;
    a = getVal;
    PR("a in binary: ",a);
    cout << "enter a number between 0 and 255: ";
    cin >> getVal;
    b = getVal;
    PR("b in binary: ",b);
    PR("a | b = ", a | b);
    PR("a & b = ", a & b);
    PR("a ^ b = ", a ^ b);
    PR("~a = ", ~a);
    PR("~b = ", ~b);
    unsigned char c = 0x5A;
    PR("c in binary: ",c);
    a |= c;
    PR("a |= c; a = ", a);
    b &= c;
    PR("b &= c; b = ", b);
    b ^= a;
    PR("b ^= a; b = ", b);
    return 0;
}