#include <iostream>

using namespace std;

#define BAND(x) (((x) > 5 && (x) < 10) ? (x) : 0)

int main()
{
    for(int i = 4;i < 11;++i)
    {
        int a = i;
        cout<<"a = " << a << endl << '\t';
        cout<<"BAND(++a) = "<< BAND(++a) << endl;
        cout<<"\t a = " << a << endl;
    }
    return 0;
}