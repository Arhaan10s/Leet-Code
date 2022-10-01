class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>ans(nums.size());
        int total=0;
        int currsum=0;
        int rightsum=0;
        int n=nums.size();
        for(auto it:nums){
            total+=it;
        }
        for(int i=0;i<n;i++)
        {
            currsum+=nums[i];
            rightsum=total-currsum;
            ans[i]=(i+1)*nums[i]-currsum+rightsum-(n-i-1)*nums[i];
        }
        return ans;
    }
};