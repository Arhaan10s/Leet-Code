class Solution {
public:
    struct compare{
        char operator()(pair<char,int>&x , pair<char,int>&y)
        {
            return y.second > x.second;
        }
    };
    string reorganizeString(string s) {
        unordered_map<char , int >hash_map;
        int k=s.size();
        for(char ch:s)
        {
            hash_map[ch]++;
        }
        priority_queue<pair<char , int> , vector<pair<char , int >> , compare>min_heap;
        for(auto i:hash_map)
        {
            min_heap.push({i.first,i.second});
        }
        string res="";
        while(min_heap.size()>1)
        {
            auto m=min_heap.top();
            min_heap.pop();
            auto n=min_heap.top();
            min_heap.pop();
            res+=m.first;
            res+=n.first;
            m.second-=1;
            n.second-=1;
            if(m.second>0)
            {
                min_heap.push(m);
            }
            if(n.second>0)
            {
                min_heap.push(n);
            }
            
        }
        if(!min_heap.empty())
        {
            auto c=min_heap.top();
            min_heap.pop();
            if(min_heap.top().second>1)
            {
                return "";
            }
            else{
                res+=min_heap.top().first;
            }
        }
        return res;
        
    }
};