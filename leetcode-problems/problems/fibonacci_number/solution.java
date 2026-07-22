class Solution {
    static int[] dp = new int[100];
     public int fib(int n) {
        Arrays.fill(dp,-1);
        return fib1(n);
     }
    public int fib1(int n) {
        if(n<=1)
        {
            return n;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        dp[n]=fib1(n-1)+fib1(n-2);
        return dp[n];
    }
}