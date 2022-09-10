class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.length();
        if(n==0) return 0;
        stack<int>stack;
        stack.push(-1);
        int maxl=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                stack.push(i);
            }
            else if(s[i]==')')
            {
                stack.pop();
                if(stack.empty())
                {
                    stack.push(i);
                }
                else
                {
                    maxl=max(maxl,i-stack.top());
                }
            }
        }
        return maxl;
    }
};