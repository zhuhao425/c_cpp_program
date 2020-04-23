#include <stdio.h>

//c语言中的const并不严谨
int main()
{
    const int a = 10;
    int *p = &a;
    *p = 4;
    printf("%d\n",a);// a的值发生了改变
    return 0;
}