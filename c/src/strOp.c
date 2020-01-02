#include <strOp.h>
#include <string.h>
#include <stdio.h>

int trimSpace(char *inbuf,char *outbuf)
{
    int len;
    int i,start,end;
    int index = 0;
    if(inbuf == NULL || outbuf == NULL)
    {
        printf("argument is error\n");
        return 1;
    }

    len = strlen(inbuf);

    for(i = 0;i < len; i ++)
    {
        if(*(inbuf+i) != ' ')
            break;
    }
    start = i;

    for(i = len - 1; i >= 0; i --)
    {
        if(*(inbuf + i) != ' ')
            break;
    }
    end = i;

    //printf("%d %d\n",start,end);

    for(i = start; i <= end; i ++)
        *(outbuf + index ++) = inbuf[i];
    
    *(outbuf + index) = 0;
    
    return 0;
}

int getStr1Str2(char *source, char *buf1, char *buf2)
{
    int len = strlen(source);
    int i;
    int index1 = 0;
    int index2 = 0;
    for(i = 0; i < len; i ++)
    {
        if(i % 2 == 0)
            *(buf1 + index1 ++) = *(source + i);
        else
            *(buf2 + index2 ++) = *(source + i);
    }
    *(buf1 + index1) = 0;
    *(buf2 + index2) = 0;
    return 0;
}