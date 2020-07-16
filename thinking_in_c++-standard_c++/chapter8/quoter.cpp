#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Quoter
{
    int lastquote;
public:
    Quoter();
    int lastQuote() const;
    const char* quote();
};

Quoter::Quoter()
{
    lastquote = -1;
    srand(time(0));
}

int Quoter::lastQuote()const
{
    return lastquote;
}

const char* Quoter::quote()
{
    static const char* quotes[] = {"Are we having fun yet?","Doctor always know best","Is it .. Atomic","Fear is obscene"};
    const int qsize = sizeof quotes / sizeof *quotes;
    int qnum = rand() % qsize;
    while(lastquote >= 0 && qnum == lastquote)
        qnum = rand() % qsize;
    return quotes[lastquote = qnum];
}

int main()
{
    Quoter q;
    const Quoter cq;
    cq.lastQuote();

    //cq.quote();

    for(int i = 0;i < 20;++i)
        cout<<q.quote()<<endl;
    return 0;
}