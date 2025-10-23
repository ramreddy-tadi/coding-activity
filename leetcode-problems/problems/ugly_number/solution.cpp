class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)
        {
            return false;
        }
        vector<int>factors;
        for(long long i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i!=2&&i!=5&&i!=3)
                {
                    factors.push_back(i);
                }
                if(i!=n/i)
                {
                    if(n/i!=2&&n/i!=5&&n/i!=3)
                    {
                       factors.push_back(n/i);
                    }
                }
            }
        }
        if(factors.size()==0)
        {
            return true;
        }
        else{
            for(int i=0;i<factors.size();i++)
            {
                if(isprime(factors[i]))
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool isprime(int n)
    {
        if(n<=1)
        {
            return false;
        }
        if(n%2==0||n%3==0)
        {
            return false;
        }
        for(long long i=5;i*i<=n;i+=6)
        {
            if(n%i==0||n%(i+2)==0)
            {
                return false;
            }
        }
        return true;
    }
};