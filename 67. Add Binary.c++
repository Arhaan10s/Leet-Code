class Solution {
public:
    string addBinary(string a, string b) {
        int l1=a.length();
        int l2=b.length();
        string ans="";
        int carry=0;
        int i=0;
        while(i<l1 || i<l2 || carry!=0)
        {
            int x=0;
            if(i<l1 && a[l1-i-1]=='1')
            {
                x=1;
            }
            int y=0;
            if(i<l2 && b[l2-i-1]=='1')
            {
                y=1;
            }
            ans=to_string((x+y+carry)%2)+ans;
            carry  = (x+y+carry)/2;
            i+=1;
        }
        return ans; 
    }
};