#include <iostream>

using namespace std;

int main()
{
    int sercet = 15;
    int guess = 0;
    while(guess != sercet)
    {
        cout << "guess the number:";
        cin >> guess;
        if(guess > sercet)
            cout << "too big" << endl;
        else if(guess < sercet)
            cout << "too small" << endl;
    }
    cout << "You guessed it!" << endl;
    return 0;
}