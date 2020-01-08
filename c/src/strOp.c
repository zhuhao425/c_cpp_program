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
        printf("argument is not valid\n");
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
    if(source == NULL || buf1 == NULL || buf2 == NULL)
    {
        printf("argument is not valid\n");
        return 1;
    }
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

int exactKeyAndValue(char *str, char *key, char *value)
{
    int len, i, sep;
    if(str == NULL || key == NULL || value == NULL)
    {
        printf("argument is not valid!\n");
        return 1;
    }

    len = strlen(str);

    for(i = 0; i < len; i ++)
        if(str[i] == '=')
            break;
    sep = i;
    if(sep == len)
    {
        printf("input str should include key and value and use '=' to connect them,for example a = 1\n");
        return 1;
    }

    *(str + sep) = 0;

    trimSpace(str, key);
    trimSpace(str + sep + 1, value);
    return 0;
}

int reversal(char *str,char * result)
{
    int len,i;
    int index = 0;

    if(str == NULL || result == NULL)
    {
        printf("argument is error\n");
        return 1;
    }

    len = strlen(str);

    for(i = len - 1; i >= 0; i --)
    {
        *(result + index ++) = *(str + i);
    }
    *(result + index) = 0;
    
    return 0;
}