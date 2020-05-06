#include <stdio.h>

//c语言中的const并不严谨
void constdecorlation()
{
    const int a = 10;
    int *p = &a;
    *p = 4;
    printf("%d\n",a);// a的值发生了改变
}

//c语言中的结构体在定义变量时需使用struct + 结构体名，所以一般用typedef进行定义。
typedef struct{
    int a;
    char b;
} test1;

typedef struct{
    char b;
    int a;
} test2;


void structAndUnion()
{
    printf("%d %d\n",sizeof(test1),sizeof(test2));
}


int main()
{
    constdecorlation();
    structAndUnion();
    return 0;
}