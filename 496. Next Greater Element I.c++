class Solution
{
	public:
		vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
		{
            int n=nums2.size();
            stack<int>st;
            unordered_map<int,int>mp;
            vector<int>res;
            for(int i=n-1;i>=0;i--)
            {
                if(st.size()==0)
                {
                    mp[nums2[i]]=-1;
                }
                else if(st.size()>0 and nums2[i]<st.top())
                {
                    mp[nums2[i]]=st.top();
                }
                else if(st.size() and st.top()<=nums2[i])
                {
                    while(st.size()>0 and st.top()<=nums2[i])
                    {
                        st.pop();
                    }
                    if(st.size()==0)
                    {
                        mp[nums2[i]]=-1;
                    }
                    else
                    {
                        mp[nums2[i]]=st.top();
                    }
                }
                st.push(nums2[i]);
            }
            for(auto i:nums1)
            {
                res.push_back(mp[i]);
            }
            return res;
        }
};
