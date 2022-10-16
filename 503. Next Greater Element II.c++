class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>ans;
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty() and st.top()<=nums[i])
            {
                st.pop();
            }
            st.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and st.top()<=nums[i])
            {
                st.pop();   
            }
            if(st.size()==0)
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(st.top());
            }
            
            st.push(nums[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};