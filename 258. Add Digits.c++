class Solution {
public:
    int addDigits(int num) {
        int d;
        int s=0;
        while(num>0)
        {
            d=num%10;
            s=s+d;
            num=num/10;
        }
       if(s<10)
       {
           return s;
       }
        else
        {
            return addDigits(s);
        }
    }
};