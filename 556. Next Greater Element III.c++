class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int a=-1,b=-1;
        for(int i=s.size()-2;i>=0;i--)
        {
            if(s[i]<s[i+1])
            {
                a=i;
                break;
            }
        }
        if(a==-1)
        {
            return -1;
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]>s[a])
            {
                b=i;
                break;
            }
        }
        if(b==-1)
        {
            return -1;
        }
        swap(s[a],s[b]);
        reverse(s.begin()+1+a,s.end());
        return stoll(s)>INT_MAX?-1:stoll(s);
    }
};