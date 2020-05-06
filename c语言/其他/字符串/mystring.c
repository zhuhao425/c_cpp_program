#include <stdio.h>
#include <string.h>

typedef int Status;
#define OK 1
#define ERROR 0

Status reverser_mystring(char *p)
{
    if(p == NULL)
        return ERROR;
    int len = strlen(p);
    int l = 0;
    int r = len - 1;
    while(l < r)
    {
        char t = p[l];
        p[l] = p[r];
        p[r] = t;
        ++l;
        --r;
    }
    return OK;
}

int strcmp_mystring(char* p,char* q)
{
    int plen = strlen(p);
    int qlen = strlen(q);
    int l = 0;
    int r = 0;
    while(l < plen && r < plen)
    {
        if(p[l] == q[r])
        {
            ++l;
            ++r;
            continue;
        }
        return p[l] < q[r];
    }
    return l < plen;
}
//...
int main()
{
    char str[10] = "abcde";
}