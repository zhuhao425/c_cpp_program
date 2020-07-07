class X
{
public:
    X();
};

X::X(){}

void f(int i)
{
    if(i < 10)
    {
        //goto jump1;
    }
    X x1;
    jump1:
        switch(i)
        {
            case 1:
                X x2;
                break;
            case 2:
                X x3;
                break;
        }
}

int main()
{
    f(9);
    f(11);
}