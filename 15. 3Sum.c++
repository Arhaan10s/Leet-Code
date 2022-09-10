class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int b=i+1;
            int c=nums.size()-1;
            int sum=nums[i]*-1;
            while(b<c)
            {
                if(nums[b]+nums[c]==sum)
                {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[b]);
                    temp.push_back(nums[c]);
                    ans.push_back(temp);
                    while(b<c && nums[b+1]==nums[b])
                    {
                        b++;
                    }
                    while(b>c && nums[c+1]==nums[c])
                    {
                        c--;
                    }
                    b++;
                    c--;
                }
                else if(nums[b]+nums[c]<sum)
                {
                    b++;
                }
                else
                {
                    c--;
                }
            }
            while(i<nums.size()-1 && nums[i]==nums[i+1])
            {
                i++;
            }
        }
        return ans;
        
    }
};