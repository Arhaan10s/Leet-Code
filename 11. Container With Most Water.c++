class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxA=0;
        while(i<j)
        {
            maxA=max(maxA,min(height[i],height[j])*(j-i));
            if(height[i]>height[j])
            {
                --j;
            }
            else if(height[i]<height[j])
            {
                ++i;
            }
            else
            {
                ++i,--j;
            }
        }
        return maxA;
    }
};