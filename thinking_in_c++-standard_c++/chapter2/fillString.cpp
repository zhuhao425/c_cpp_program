#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("fillString.cpp");
    string s, line;
    while(getline(in,line))
        s += line + '\n';
    cout << s;
    in.close();
    return 0;
}