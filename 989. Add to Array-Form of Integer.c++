class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int c=0,sum=0;
        vector<int>ans;
        
        for(int i=num.size()-1;i>=0||k!=0;i--)
        {
            if(i>=0)
            {
                sum=num[i]+ k%10+ c;
            }else
            {
                sum=k%10 + c;
            }
            ans.push_back(sum%10);
            k=k/10;
            c=sum/10;
        }
        if(c)
        {
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};