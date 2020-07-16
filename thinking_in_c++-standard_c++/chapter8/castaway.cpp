class Y
{
    int i;
public:
    Y();
    void f() const;
};

Y::Y()
{
    i = 0;
}

void Y::f()const
{
    //i++;
    ((Y*)this)->i++;

    (const_cast<Y*>(this))->i++;
}

int main()
{
    const Y yy;
    yy.f();
}