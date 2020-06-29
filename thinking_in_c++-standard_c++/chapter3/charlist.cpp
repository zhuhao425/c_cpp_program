#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 128;++i)
        cout << " value:" << i
             << " character: "
             << char(i)
             << endl;
    return 0;
}