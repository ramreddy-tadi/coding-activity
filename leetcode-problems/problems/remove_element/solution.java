class Solution {
    public int removeElement(int[] nums, int val) {
        int ans = 0;
        int len =0;
        for(int x:nums)
        {
            if(x!=val)
            {
                ans++;
            }
            len++;
        }
        int a=0;
        int b=len-1;
        while(a<b)
        {
            if(nums[a]==val)
            {
                if(nums[b]!=val)
                {
                    int temp = nums[a];
                    nums[a]=nums[b];
                    nums[b]=temp;
                    a++;
                    b--;
                }
                else{
                    b--;
                }
            }
            else{
                a++;
            }
        }
        return ans;
    }
}