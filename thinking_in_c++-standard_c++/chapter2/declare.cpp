extern int i;
extern float f(float);//declation without definition

float b; //declation & definition

float f(float a)//definition
{
    return a + 1.0;
}

int i;//definition

int h(int x)//declation & definition
{
    return x + 1;
}

int main()
{
    b = 1.0;
    i = 2;
    f(b);
    h(i);
}