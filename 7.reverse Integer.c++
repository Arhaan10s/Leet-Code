class Solution {
public:
    int reverse(int x) {
        
        int s=0;
        
        while(x!=0)
        {
            if(s>INT_MAX/10||s<INT_MIN/10)
            {
                return 0;
            }
            else
            {
                
            
            int d=x%10;
            s=(s*10)+d;
            x=x/10;
            }
        }
        
        return s;
    }
};