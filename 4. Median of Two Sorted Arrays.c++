class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>num(nums1.size()+nums2.size());
        vector<int>ans;
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),num.begin());
        float median=0;
        int n=num.size()-1;
        if(n%2!=0)
        {
            median=(num[n/2]+num[(n/2)+1])/2.00;
        }
        else
        {
            median=num[n/2];
        }
        return median;
        
    }
};