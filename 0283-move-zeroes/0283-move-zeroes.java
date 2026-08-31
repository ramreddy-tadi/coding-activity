class Solution {
    public void moveZeroes(int[] nums) {
        int i=0;
        for(int ar:nums)
        {
            if(ar!=0)
            {
                nums[i]=ar;
                i++;
            }
        }
        while(i<nums.length)
        {
            nums[i]=0;
            i++;
        }
    }
}