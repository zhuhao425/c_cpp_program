class Comm
{
    const volatile unsigned char byte;
    volatile unsigned char flag;

    enum{ bufsize = 100};

    unsigned char buf[bufsize];
    int index;

public:
    Comm();
    void isr() volatile;
    char read(int index)const;
};

Comm::Comm():index(0),byte(0),flag(0){}

void Comm::isr()volatile
{
    flag = 0;
    buf[index++] = byte;

    if(index >= bufsize)
        index = 0;
}

char Comm::read(int index) const
{
    if(index < 0 || index >= bufsize)
        return 0;
    return buf[index];
}

int main()
{
    volatile Comm port;
    port.isr();
    //port.read(0);
}