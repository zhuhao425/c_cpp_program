struct A
{
    int i;
    char j;
    float f;
    void func();
};

void A::func(){}

struct B
{
public:
    int i;
    char j;
    float f;
    void func();
};

void B::func(){}

int main()
{
    A a;
    B b;
    a.i = b.i = 1;
    a.j = b.j = 'c';
    a.f = b.f = 3.1415926;
    a.func();
    b.func();
}