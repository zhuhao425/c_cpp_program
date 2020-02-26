class Solution {
public:
    string convert(string s, int numRows) {
        char ch[1000][1000];
        memset(ch,-1,sizeof(ch));
        int len = s.length();
        int index = 0;
        int maxcol=0,maxrow=0;
        int direct = 0;
        int col=-1,row=0;
        while(index < len)
        {
            getNext(col,row,direct,numRows);
	    cout<<col<<" "<<row<<endl;
            ch[col][row] = s[index ++];
            if(col > maxcol)
                maxcol = col;
            if(row > maxrow)
                maxrow = row;
        }
        string res;
        for(int i=0;i<=maxcol;i++)
            for(int j=0;j<=maxrow;j++)
                if(ch[i][j] != 0)
                    res+=ch[i][j];
        return res;
    }
    void getNext(int &col,int &row,int &direct,int numRows)
    {
        if(direct == 0)
        {
            col ++;
            if(col == numRows - 1)
                direct = 1;
        }
        else if(direct == 1)
        {
            col --;
            row ++;
            if(col == 0)
                direct = 0;
        }
    }
};
