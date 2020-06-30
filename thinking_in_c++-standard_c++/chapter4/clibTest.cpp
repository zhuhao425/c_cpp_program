#include <fstream>
#include <iostream>
#include <string>
#include <cassert>

#include "clib.h"

using namespace std;

int main()
{
    CStash intStach, stringStach;
    int i;
    char *cp;
    ifstream in;
    string line;
    const int bufsize = 80;
    initialize(&intStach, sizeof(int));
    for (i = 0; i < 100;++i)
        add(&intStach, &i);
    for (i = 0; i < count(&intStach);++i)
        cout << "fetch(&intStach, " << i << ") = "
             << *(int *)fetch(&intStach, i)
             << endl;
    initialize(&stringStach, sizeof(char) * bufsize);
    in.open("clibTest.cpp");
    assert(in);
    while(getline(in,line))
        add(&stringStach, line.c_str());
    i = 0;
    while((cp = (char*)fetch(&stringStach,i++)) != 0)
        cout << "fetch(&stringStach, " << i << ") = "
             << cp << endl;
    cleanup(&intStach);
    cleanup(&stringStach);
}