class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor)
        {
            return 1;
        }
        bool sign=true;
        if(dividend >=0 && divisor <0) sign=false;
        else if (dividend<=0 && divisor>0) sign=false;
        long n = labs(dividend);
        long d = labs(divisor);
        //divisor=abs(divisor);
        long q=0;
        while(n>=d)
        {
            int count=0;
            while(n>=(d <<(count+1)))
            {
                count++;
            }
            q+=1<<count;
            n-=(d<<count);
        }
        if(q==(1<<31) && sign)
        {
            return INT_MAX;
        }
        if(q==(1<<31) && !sign)
        {
            return INT_MIN;
        }
        return sign ? q : -q;

    }
};