class Solution {
    public int maxProfit(int[] prices) {
        int minpro = prices[0];
        int maxpro = 0;
        for(int i=1;i<prices.length;i++)
        {
            if(prices[i]<minpro)
            {
                minpro=prices[i];
            }
            else{
                int pro = prices[i]-minpro;
                if(pro>maxpro)
                {
                    maxpro=pro;
                }
            }
        }
        return maxpro;
    }
}