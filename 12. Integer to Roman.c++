class Solution {
public:
    string intToRoman(int num) 
    {
        string s="";
        if(num>=1000)
        {
            for(int i=1; i<=num/1000; i++)
                s+="M";
            num%=1000;
        }
        if(num>=900)
        {
            s+="CM";
            num%=100;
        }
        else if(num>=500)
        {
            s+="D";
                num-=500;
            for(int i=1; i<=num/100; i++)
                s+="C";
            num%=100;
        }
        else if(num>=400)
        {
           s+="CD";
                num%=100;
        }
        else if(num>=100)
        {
            for(int i=1; i<=num/100; i++)
                s+="C";
            num%=100;      
        }
        if(num>=90)
        {
            s+="XC";
            num%=10;
        }
        else if(num>=50)
        {
            s+="L";
                num-=50;
            for(int i=1; i<=num/10; i++)
                s+="X";
            num%=10;
        }
        else if(num>=40)
        {
           s+="XL";
                num%=10;
        }
        else if(num>=10)
        {
            for(int i=1; i<=num/10; i++)
                s+="X";
            num%=10;      
        }
        if(num==9)
        {
            s+="IX";
        }
        else if(num>=5)
        {
            s+="V";
                num-=5;
            for(int i=1; i<=num; i++)
                s+="I";
        }
        else if(num==4)
        {
           s+="IV";
        }
        else if(num>=1)
        {
            for(int i=1; i<=num; i++)
                s+="I" ;     
        }
        return s;
  }
};