//字符串的一些操作

/*
删除字符串的前后空格
    @inbuf 要删除的字符串
    @outbuf 删除后的字符串
*/
int trimSpace(char *inbuf,char *outbuf);

/*
将字符串中的奇数位的字符和偶数位的字符提取出来，组成新的字符串
    @source 原字符串
    @buf1 奇数位字符组成的字符串
    @buf2 偶数位字符组成的字符串
*/
int getStr1Str2(char *source, char *buf1, char *buf2);


/*
从字符串中读取key和value
    @str 要提取的字符串
    @key 提取的结果
    @value 提取的结果
*/
int exactKeyAndValue(char *str, char *key, char *value);

/*
将字符串反转
    @str 要反转的字符串
    @result 反转结果
*/
int reversal(char *str,char * result);