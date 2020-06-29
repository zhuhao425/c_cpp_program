#include <iostream>

using namespace std;

struct Structure3
{
    char c;
    int i;
    float f;
    double d;
};

int main()
{
    Structure3 s1, s2;
    Structure3 *sp = &s1;
    sp->c = 'a';
    sp->i = 1;
    sp->f = 3.14;
    sp->d = 0.00093;
    sp = &s2;
    sp->c = 'a';
    sp->i = 1;
    sp->f = 3.14;
    sp->d = 0.00093;
}