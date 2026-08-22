class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int sum =0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        int sum1=sum;
        int j=0;
        for(int i=k;i<nums.length;i++)
        {
            sum=sum-nums[j];
            j++;
            sum+=nums[i];
            if(sum>sum1)
            {
                sum1=sum;
            }
        }
        double res = (double)sum1/k;
        return res;
    }
}