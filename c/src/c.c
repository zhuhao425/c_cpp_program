#include <stdio.h>
#include <strOp.h>
#include <sort.h>
#include <stdlib.h>
#include <string.h>

int testSort(int args,char *argv[])
{
    int len,i;
    int array[100];

    if(args > 101)
    {
        printf("too many numbers,your array's length must less than 100\nuseage:%s arrays\n",argv[0]);
        return 1;
    }

    len = args - 2;
    for(i = 0;i < len;i ++)
    {
        array[i] = atoi(argv[i+2]);
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

    if(args != 3)
    {
        printf("input for strop is only a string\n");
        return 1;
    }

    trimSpace(argv[2],str);

    printf("%s\n",str);
}

int main(int args,char *argv[])
{
    if(args < 3 || argv[1][0]!='-')
    {
        printf("Useage:%s -op inputs\n",argv[0]);
        return 1;
    }

    if(strcmp(argv[1],"-sort") == 0)
    {
        testSort(args,argv);
    }
    else if(strcmp(argv[1],"-str") == 0)
    {
        testStrOp(args,argv);
    }
    else
    {
        printf("unknown operation,only support -sort and -str\n");
        return 1;
    }
    
    return 0;
}