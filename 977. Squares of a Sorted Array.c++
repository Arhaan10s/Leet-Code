class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n = nums.size();
        int left = 0, right = n - 1;
        vector<int> res(n, 0);
        for (int i = n - 1; i >= 0; i--) {
            int square;
            if (abs(nums[left]) < abs(nums[right])) {
                square = nums[right--];
            } else { square = nums[left++]; }
            res[i] = square * square;
        }
        return res;
    }
};
