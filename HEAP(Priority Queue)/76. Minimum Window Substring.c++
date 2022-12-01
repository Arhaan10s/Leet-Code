class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char ch:t )
        {
            mp1[ch]++;
        }
        int l=0;int r=0;int c=0;int check=INT_MAX;
        string ans="";
        for(;r<s.length();r++)
        {
            char ch=s[r];
            if(mp1.find(ch)!=mp1.end())
            {
                mp2[ch]++;
                if(mp2[ch]<=mp1[ch])
                {
                    c++;
                }
            }
            if(c>=t.length())
            {
                while(mp1.find(s[l])==mp1.end() || mp2[s[l]]>mp1[s[l]])
                {
                    mp2[s[l]]--;
                    l++;
                }
                if(r-l+1<check)
                {
                    check=r-l+1;
                    ans=s.substr(l,check);
                }
            }
        }
        return ans;
    }
};