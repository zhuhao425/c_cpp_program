#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 10;++i)
        v.push_back(i);
    for (int i = 0; i < 10;++i)
        cout << v[i] << ",";
    cout << endl;
    for (int i = 0; i < 10;++i)
        v[i] *= 10;
    for (int i = 0; i < 10;++i)
        cout << v[i] << ",";
    cout << endl;
    return 0;
}