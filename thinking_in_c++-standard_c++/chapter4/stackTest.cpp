#include "stack.h"

#include <fstream>
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main()
{
    ifstream in("stackTest.cpp");
    assert(in);
    Stack textlines;
    textlines.initialize();
    string line;
    while(getline(in,line))
        textlines.push(new string(line));
    string *s;
    while((s = (string *)textlines.pop()) != 0)
    {
        cout << *s << endl;
        delete s;
    }
    textlines.cleanup();
    return 0;
}