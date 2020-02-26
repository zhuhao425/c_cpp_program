#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        int len = str.length();
        int start;
        int tag = 1;
        for(start = 0;start < len;start ++)
            if(str[start] != ' ')
                break;
        if(start >= len || (str[start] != '+' && str[start] != '-' && !isNum(str[start])))
            return 0;
        for(int i = start + 1;i < len;i ++)
            if(!isNum(str[i]))
                str[i]= 0;
        if(str[start] == '-')
        {
            tag = -1;
            start ++;
        }
        if(str[start] == '+')
        {
            start ++;
        }
        while(str[start] == '0')
            start ++;

        len = strlen(str.c_str());
        int sum = 0;
        for(int i = len - 1;i >= start; i --)
        {
            sum += (str[i] - '0') * tag;
        
            int judge = (str[i] - '0') + (i - 1 >= start ? str[i - 1] - '0' :  0 )*10;
            if(i> start &&tag > 0)
            {
                //INT_MAX = tmpy * tag + tmpx
                //sum     = now * tag + sum
                int tmpy = INT_MAX / (tag);
                int tmpx = INT_MAX % (tag*10);
		cout<<str[i] - '0'<<endl;
		cout<<judge <<"--->"<<tmpy<<endl;
		cout<<sum <<"---->" <<tmpx<<endl;
		cout<<"----------"<<endl;
                if(judge> tmpy)
                    return INT_MAX;
                if(judge == tmpy && sum >= tmpx)
                    return INT_MAX;
            }
            else if(i>start && tag < -1)
            {
                int tmpy = INT_MIN / (tag);
                int tmpx = INT_MIN % (tag*10);
                if(judge > tmpy)
                    return INT_MIN;
                if(judge == tmpy && sum <= -tmpx)
                    return INT_MIN;
            }
		tag *= 10;
        }
        return sum;
    }
    bool isNum(char ch)
    {
        if(ch>='0' && ch <='9')
            return true;
        else
            return false;
    }
};

int main()
{
	Solution sol;
	int sum = sol.myAtoi("2147483646");
	cout<<sum<<endl;
	return 0;
}
