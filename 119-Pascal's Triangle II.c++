class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>sum;
        long res=1;
        for(int i=0;i<=rowIndex;i++)
        {
            for(int j=0;j<i;++j)
            {
                res*=rowIndex-j;
                res/=j+1;
            }
            sum.push_back(res);
            res=1;
        }
        return sum;
    }
};