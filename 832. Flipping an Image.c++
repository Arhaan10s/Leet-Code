class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> res;
        vector<int> vec;
        for(int i=0;i<image.size();i++)
        {
         for(int j=image[i].size()-1;j>=0;j--)
         {
             if(image[i][j]==0)
             {
                 vec.push_back(1);
             }
             else
             {
                 vec.push_back(0);
             }
         }
             res.push_back(vec);
             vec.clear();
         
        }
        return res;
    }
};