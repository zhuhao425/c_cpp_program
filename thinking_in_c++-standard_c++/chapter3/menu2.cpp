#include <iostream>

using namespace std;

int main()
{
    bool quit = false;
    while(!quit)
    {
        cout << "select a,b,c or q to quit: ";
        char response;
        cin >> response;
        switch(response)
        {
            case 'a':
                cout << "you choose 'a'" << endl;
                break;
            case 'b':
                cout << "you choose 'b'" << endl;
                break;
            case 'c':
                cout << "you choose 'c'" << endl;
                break;
            case 'q':
                cout << "quitting the menu..." << endl;
                quit = true;
                break;
            default:
                cout << "please use a,b,c or q!" << endl;
            }
    }
    return 0;
}