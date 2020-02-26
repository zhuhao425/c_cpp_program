class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        if(len == 0)
            return 0;
        int l = 0,r = 0;
        int maxlen = 1;
        for(r = 0;r < len;r ++)
        {
            bool tag = false;
            for(int i = l;i < r;i ++)
                if(s[i] == s[r])
                {
                    l = i + 1;
                    tag = true;
                    break;
                }
            if(!tag)
            {
                int tmplen = r - l + 1;
                if(tmplen > maxlen)
                    maxlen = tmplen;
            }
        }
        return maxlen;
    }
};
