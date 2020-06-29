#include <iostream>

using namespace std;

int main()
{
    int sercet = 15;
    int guess;
    do
    {
        cout << "guess the number:";
        cin >> guess;
        if(guess < sercet)
            cout << "too small" << endl;
        else if(guess > sercet)
            cout << "too big" << endl;
    } while (guess != sercet);
    cout << "You got it!" << endl;
    return 0;
}