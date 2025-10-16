class Solution {
public:
    int fib(int n) {
        if(n<=1)
        {
            return n;
        }
        int fir=0;
        int sec=1;
        int nex;
        for(int i=2;i<=n;i++)
        {
            nex=fir+sec;
            fir=sec;
            sec=nex;
        }
        return nex;
    }
};