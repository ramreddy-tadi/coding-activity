class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprofit =prices[0];
        int maxprofit =0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<minprofit)
            {
                minprofit=prices[i];
            }
            else{
                int profit = prices[i]-minprofit;
                if(profit>maxprofit)
                {
                    maxprofit=profit;
                }
            }
        }
        return maxprofit;
    }
};