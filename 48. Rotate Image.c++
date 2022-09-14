class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> mat = matrix;
        
        int n=mat.size(), m=mat[0].size();
        
        int k=0,l=0;
        
        for(int i=n-1; i>=0; i--) {
            for(int j=0; j<m; j++) {
                matrix[k][l] = mat[i][j];
                k++;
            }
            l++;
            k=0;
        }
        
    }
};