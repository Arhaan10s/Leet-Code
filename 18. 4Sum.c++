class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        int n=nums.size();
        for(int i = 0; i< n - 3; i++){
            for(int j = i + 1; j < n-2; j++){ 
                long long Sum = (target - (long long)(nums[i] + nums[j]));
                int a = j + 1;
                int b = n - 1;
                while (a<b){
                    if (nums[a]+nums[b]==Sum){
                        ans.insert({nums[i],nums[j],nums[a],nums[b]});
                        while(a<b && nums[a]==nums[a+1]){
                            a++;
                        }
                        while(a<b && nums[b]==nums[b-1]){
                            b--;
                        }
                        a++;
                        b--;
                    }
                    else if(nums[a]+nums[b]<Sum){
                        a++;
                    }
                    else{
                        b--;
                    }
                    
                }
                while(j < n-2 && nums[j] == nums[j+1])
                {
                    j++;
                }
            }
            while(i < n-1 && nums[i] == nums[i+1])
            {
                i++;
            }
        }
        vector<vector<int>> ans1;
        for(vector<int> x: ans)
            ans1.push_back(x);
        return ans1;
    }
};