class Solution {
public:
    string smallestSubsequence(string s) {
        stack<int>st;
        vector<int>lastindex(26);
        vector<bool>seen(26);
        for(int i=0;i<s.size();i++)
        {
            lastindex[s[i]-'a']=i;
        }
        for(int i=0;i<s.size();i++)
        {
            int c=s[i]-'a';
            if(seen[c]) continue;
            while(!st.empty() && st.top()>c && i<lastindex[st.top()])
            {
                seen[st.top()]=false;
                st.pop();
            }
            st.push(c);
            seen[c]=true;
        }
         string ans="";
        while(!st.empty())
        {
            ans.push_back(st.top()+'a');
            st.pop();
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};