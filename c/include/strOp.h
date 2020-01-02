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