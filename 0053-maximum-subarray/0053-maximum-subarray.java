class Solution {
    public int maxSubArray(int[] nums) {
        int sum=nums[0];
        int su=nums[0];
        for(int i=1;i<nums.length;i++)
        {
            su=Math.max(nums[i],su+nums[i]);
            sum=Math.max(su,sum);
        }
        return sum;
    }
}