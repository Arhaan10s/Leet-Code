class Solution {
public:
    struct compare{
        int operator()(vector<int>&a , vector<int>&b){
            return a[0] * a[0] + a[1] * a[1] < b[0] * b[0] + b[1] * b[1];

        }};
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<vector<int> , vector<vector<int>> , compare>max_heap;
        for(vector<int> i:points)
        {
                max_heap.push(i);
                if(max_heap.size()>k)
                {
                    max_heap.pop();
                }
        }
        while(!max_heap.empty())
        {
            ans.push_back(max_heap.top());
            max_heap.pop();
        }
        return ans;
    }
};