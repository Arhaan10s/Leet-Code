class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> mp;
        mp['I']=1;   
        mp['D']=500; 
        mp['M']=1000;
        mp['V']=5; 
        mp['C']=100;
        mp['X']=10;
        mp['L']=50;
        
        int sum=0;
        
        int n=s.length();
        for(int i=n-1; i>=0 ;i--)
        {
            if(i>0 && mp[s[i-1]] < mp[s[i]])
            {
                sum=sum+(mp[s[i]] - mp[s[i-1]]);
                i--;
            }
            else
            {
                sum=sum+mp[s[i]];
            }
        }
        return sum;
    }
};