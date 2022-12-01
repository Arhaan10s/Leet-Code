class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>max_heap;
        vector<int>ans;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                max_heap.push(matrix[i][j]);
            }
        }
        while(max_heap.size()!=k)
        {
            max_heap.pop();
        }
        return max_heap.top();
    }
};