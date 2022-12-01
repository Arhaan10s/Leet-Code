class Solution {
public:
    struct valueCompare{
      char operator()(pair<char , int>&x , pair<char , int> &y)
      {
          return y.second>x.second;
      }
    };
    string frequencySort(string s) {
        unordered_map<char , int> hash_map;
        for(char ch:s)
        {
            hash_map[ch]++;
        }
        priority_queue<pair<char , int > , vector<pair<char , int >>,valueCompare>max_heap;
        for(auto entry:hash_map)
        {
            max_heap.push({entry.first,entry.second});
        }
        string res="";
        while(!max_heap.empty())
        {
            int x=max_heap.top().second;
            char c=max_heap.top().first;
            while(x)
            {
                res+=c;
                x--;
            }
            max_heap.pop();
        }
        return res;
    }
};