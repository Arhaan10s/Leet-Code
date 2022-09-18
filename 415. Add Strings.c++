class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size()-1;
        int n2=num2.size()-1;
        int carry=0;
        string ans;
        while(n1>=0 || n2>=0)
        {
            int sum=carry+((n1>=0)? (num1[n1]-'0'):0)+
                          ((n2>=0)? (num2[n2]-'0'):0);
           
            carry=sum/10;
            ans.push_back(sum%10+'0');
            n1--;
            n2--;
        }
        if(carry)
        {
            ans.push_back(carry + '0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};