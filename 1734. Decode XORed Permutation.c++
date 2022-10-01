class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        vector<int>ans;
        int a=0;
        int n=encoded.size()+1;
        for(int i=1;i<=n;i++)
        {
            a=a^i;
        }
        for(int i=0;i<n-1;i++)
        {
            if(i%2==1)
            {
                a=a^encoded[i];
            }
        }
        ans.push_back(a);
        for(int i=0;i<n-1;i++)
        {
            ans.push_back(ans[i]^encoded[i]);
        }
        return ans;
    }
};