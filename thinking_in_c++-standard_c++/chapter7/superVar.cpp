#include <iostream>

using namespace std;

class SuperVar
{
    enum
    {
        character,
        interger,
        floating_point,
    }vartype;

    union
    {
        char c;
        int i;
        float f;
    };

public:
    SuperVar(char ch);
    SuperVar(int ii);
    SuperVar(float ff);
    void print();
};

SuperVar::SuperVar(char ch)
{
    vartype = character;
    c = ch;
}

SuperVar::SuperVar(int ii)
{
    vartype = interger;
    i = ii;
}

SuperVar::SuperVar(float ff)
{
    vartype = floating_point;
    f = ff;
}

void SuperVar::print()
{
    switch (vartype)
    {
    case character:
        cout << "character: " << c << endl;
        break;
    case interger:
        cout << "integer: " << i << endl;
        break;
    case floating_point:
        cout << "floating_point: " << f << endl;
        break;
    default:
        cout << "unkonwn type!" << endl;
        break;
    }
}

int main()
{
    SuperVar A('c'), B(12), C(1.44F);
    A.print();
    B.print();
    C.print();
    return 0;
}