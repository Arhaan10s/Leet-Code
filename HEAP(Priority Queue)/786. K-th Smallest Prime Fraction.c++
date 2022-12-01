class Solution {
public:
    struct compare{
        int operator()(pair<int,int>&x , pair<int,int>&y)
        {
            if(x.first*y.second < x.second*y.first)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    };
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare>pq;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                pq.push({arr[i],arr[j]});
                if(pq.size()>k)
                {
                    pq.pop();
                }
            }
        }
        return vector<int>({pq.top().first,pq.top().second});
    }
};