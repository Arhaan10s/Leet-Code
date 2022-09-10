class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int>ans(n,0);
        nums[0]=1;
        unsigned long long ans1=1;
        unsigned long long m=0;
        for(int i=1;i<n;i++)
        {
            m=1;
            for(int j=i-1;j>=0;j--)
            {
                if(nusm[i]>nums[j])
                {
                    m+=ans[j];
                }
            }
            ans[i]=m;
            ans1+=ans[i];
        }
        return ans1;
    }
};