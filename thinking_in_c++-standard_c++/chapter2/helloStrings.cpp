#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    string s3 = "hello world";
    string s4("I am");
    s2 = "Today";
    s1 = s3 + " " + s4;
    s1 += " 8 ";
    cout << s1 + s2 + "!" << endl;
    return 0;
}