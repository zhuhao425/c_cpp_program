#include <stdio.h>
#include <strOp.h>
#include <sort.h>
#include <stdlib.h>
#include <string.h>

int testSort(int args,char *argv[])
{
    int len,i;
    int array[100];
    if(args < 2)
    {
        printf("too few argument\nuseage:%s arrays\n",argv[0]);
        return 1;
    }
    if(args > 100)
    {
        printf("too many numbers,your array's length must less than 100\nuseage:%s arrays\n",argv[0]);
        return 1;
    }

    len = args - 1;
    for(i = 0;i < len;i ++)
    {
        array[i] = atoi(argv[i+1]);
    }

    bubblesort(array,len);

    for(i = 0;i < len;i ++)
    {
        printf("%d ",array[i]);
    }
    puts("");
    return 0;
}

int testStrOp(int args,char *argv[])
{
    char str[128];
    char inbuf[128];

    strcpy(inbuf,"        d");
    trimSpace(inbuf,str);

    printf("%s\n",str);
}

int main(int args,char *argv[])
{
    testStrOp(args,argv);
    return 0;
}