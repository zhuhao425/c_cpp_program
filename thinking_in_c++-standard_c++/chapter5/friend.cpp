struct X;

struct Y
{
    void f(X *);
};

struct X
{
private:
    int i;
public:
    void initialize();
    friend void g(X *, int);
    friend void Y::f(X *);
    friend struct Z;
    friend void h();
};

void g(X *x, int i)
{
    x->i = i;
}

void Y::f(X *x)
{
    x->i = 47;
}

struct Z
{
private:
    int j;
public:
    void initialize();
    void g(X *x);
};

void Z::initialize()
{
    j = 99;
}

void Z::g(X *x)
{
    x->i += j;
}

void h()
{
    X x;
    x.i = 100;
}

int main()
{
    X x;
    Z z;
    z.g(&x);
}