class Solution {
public:
    bool isValid(string s) {
        int l=s.length();
        stack<int>sa;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                sa.push(s[i]);
            }
            else
            {
                if(!sa.empty())
                {
                    char a=sa.top();
                    if(a=='(' && s[i]==')' || a=='[' && s[i]==']' || a=='{' && s[i]=='}')
                    {
                        sa.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if(!sa.empty())
        {
            return false;
        }
        return true;
    }
};