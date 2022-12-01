class Solution {
public:
    struct compare{
        char operator()(pair<string,int>&x , pair<string,int>&y)
        {
            if(x.second!=y.second)
            {
                return x.second<y.second;
            }
            else
            {
                return x.first>y.first;
            }
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>hash_map;
        for(auto i:words)
        {
            hash_map[i]++;
        }
        priority_queue<pair<string,int> , vector<pair<string , int>> , compare>min_heap;
        vector<string>ans;
        for(auto i:hash_map)
        {
            min_heap.push(i);
        }
        while(k--)
        {
            auto a=min_heap.top();
            min_heap.pop();
            ans.push_back(a.first);
        }
        return ans;
    }
};