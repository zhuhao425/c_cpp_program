#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<string> v;
    ifstream in("fillVector.cpp");
    string line;
    while(getline(in,line))
        v.push_back(line);
    for (int i = 0; i < v.size();++i)
        cout << i << ": " << v[i] << endl;
    in.close();
    return 0;
}