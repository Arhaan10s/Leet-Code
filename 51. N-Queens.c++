class Solution {
public:
    bool check(int i,int j,vector<string>&temp)
    {
        int x=i;
        int y=j;
        while(x>=0)
        {
            if(temp[x][y]=='Q')return false;
            x--;
        }
        x=i;
        y=j;
        while(x>=0 && y>=0)
        {   
            if(temp[x][y]=='Q')return false;
            x--;
            y--;    
        } 
        x=i;
        y=j;
        while(x>=0 && y<temp.size())
        {
            if(temp[x][y]=='Q')return false;
            x--;
            y++;
        }
        return true;
    }
    void help(int i,int n,vector<string>&temp,vector<vector<string>>&ans)
    {
        if(i==n)
        {
            ans.push_back(temp);
            return;
        }
        for(int j=0;j<n;j++)
        {
            
            if(check(i,j,temp))
            {
                temp[i][j]='Q';
                help(i+1,n,temp,ans);
                temp[i][j]='.';
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> temp;
        string s;
        for(int i=0;i<n;i++)
        {
            s=s+'.';
        }
        for(int i=0;i<n;i++)
        {
            temp.push_back(s);
        }
        vector<vector<string>> ans;
        help(0,n,temp,ans);
        return ans;
    }
};