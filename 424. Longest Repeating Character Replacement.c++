class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        map<char,int>ans;
        int ws=0;int len=0;int res=0;
        for(int we=0;we<n;we++)
        {
            ans[s[we]]++;
            len=max(len,ans[s[we]]);
            if(we-ws+1-len>k)
            {
                ans[s[ws]]--;
                ws++;
            }
        }
         
        return s.length()-ws;
    }
};