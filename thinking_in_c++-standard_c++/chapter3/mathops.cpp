#include <iostream>

using namespace std;

#define PRINT(STR,VAR) cout<<STR << " = " << VAR << endl

int main()
{
    int i, j, k;
    float u, v, w;
    cout << "enter an integer: ";
    cin >> j;
    cout << "enter another integer: ";
    cin >> k;
    PRINT("j",j);
    PRINT("k",k);
    i = j + k;
    PRINT("j + k", i);
    i = j - k;
    PRINT("j - k", i);
    i = k / j;
    PRINT("j / k", i);
    i = k * j;
    PRINT("j * k", i);
    i = k % j;
    PRINT("k % j", i);

    cout << "enter an float-point number: ";
    cin >> v;
    cout << "enter another float-point number: ";
    cin >> w;
    u = v + w;
    PRINT("v + w", u);
    u = v - w;
    PRINT("v - w", u);
    u = v * w;
    PRINT("v * w", u);
    u = v / w;
    PRINT("v / w", u);

    PRINT("u", u);
    PRINT("v", v);
    u += v;
    PRINT("u += v",u);
    u -= v;
    PRINT("u -= v",u);
    u *= v;
    PRINT("u *= v",u);
    u /= v;
    PRINT("u /= v",u);
    return 0;
}