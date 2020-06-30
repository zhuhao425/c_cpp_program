#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

#include "cpplib.h"

using namespace std;

int main()
{
    Stash intStash;
    intStash.initialize(sizeof(int));
    for (int i = 0; i < 100;++i)
        intStash.add(&i);
    for (int i = 0; i < 100;++i)
        cout << "intStash.fetch(" << i << ") = "
             << *(int *)intStash.fetch(i)
             << endl;
    Stash stringStash;
    const int bufsize = 80;
    stringStash.initialize(sizeof(char) * bufsize);
    ifstream in("cpplibTest.cpp");
    assert(in);
    string line;
    while(getline(in,line))
        stringStash.add(line.c_str());
    int k = 0;
    char *cp;
    while((cp = (char *)stringStash.fetch(k++)) != 0)
        cout << "stringStash.fetch(" << k << ") = "
             << cp << endl;
    intStash.cleanup();
    stringStash.cleanup();
    return 0;
}