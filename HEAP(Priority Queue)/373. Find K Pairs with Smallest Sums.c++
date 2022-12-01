class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>>max_heap;
        vector<vector<int>>ans;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                int sum=nums1[i]+nums2[j];
                if(max_heap.size()<k)
                {
                    max_heap.push({sum,{nums1[i],nums2[j]}});
                }
                else if(sum<max_heap.top().first)
                {
                    max_heap.pop();
                    max_heap.push({sum,{nums1[i],nums2[j]}});
                }
                else
                {
                    break;
                }
            }
        }
        while(!max_heap.empty())
        {
            
            ans.push_back({max_heap.top().second.first,max_heap.top().second.second});
            max_heap.pop();
        }
        return ans;
    }
};
