class Solution {
public:
    struct myCompare{
      int operator()(pair<int , int>&x , pair<int , int> &y)
      {
          return y.second<x.second;
      }  
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map< int , int > hash_map;
        for(int n:nums)
        {
            hash_map[n]++;
        }
        vector<int>ans;
        int n=nums.size();
        priority_queue<pair<int , int > , vector<pair<int , int>> , myCompare>min_heap;
        for(auto i:hash_map)
        {
            if(k)
            {
                min_heap.push(i);
                k--;
            }
            else
            {
                if(min_heap.top().second<i.second)
                {
                    min_heap.pop();
                    min_heap.push(i);
                }
            }
        }
        while(!min_heap.empty())
        {
            ans.push_back(min_heap.top().first);
            min_heap.pop();
        }
        return ans;
    }
};