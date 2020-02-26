class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        int maxlen = 1;
        int l = 0;
        for(int start = 0;start < len;start ++)
        {
            int tmplen = 1;
            while(start - tmplen >= 0 && start + tmplen < len)
            {
                if(s[start - tmplen] == s[start + tmplen])
                    tmplen ++;
                else
                    break;
            }

            int nowlen = (tmplen - 1) * 2 + 1;
            if(nowlen > maxlen)
            {
                maxlen = nowlen;
                l = start - tmplen + 1;
            }
        }

        for(int start = 0; start < len; start ++)
        {
            int tmplen = 1;
            int tmpl = start;
            while(tmpl >= 0 && tmpl + tmplen < len)
            {
                if(s[tmpl] == s[tmpl + tmplen])
                {
                    tmpl --;
                    tmplen +=2;
                }
                else
                    break;
            }
            tmpl ++;
            tmplen --;
            if(tmplen > maxlen)
            {
                l = tmpl;
                maxlen = tmplen;
            }
        }
        return s.substr(l,maxlen);
    }
};
