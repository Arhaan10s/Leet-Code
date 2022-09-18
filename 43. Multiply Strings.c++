class Solution {
public:
    string multiply(string num1, string num2) {
        string ans="";
        if(num1=="0" || num2=="0") return "0";
        vector<int>num(num1.size()+num2.size(),0);
        for(int i=num1.size()-1;i>=0;i--)
        {
            for(int j=num2.size()-1;j>=0;j--)
            {
                num[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                num[i+j]+=num[i+j+1]/10;
                num[i+j+1]=num[i+j+1]%10;
            }
        }
        int a=0;
        while(a<num.size() && num[a]==0)
        {
            a++;
        }
        while(a<num.size())
        {
            ans.push_back(num[a]+'0');
            a++;
        }
        return ans;
    }
};  