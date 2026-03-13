class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] res = new int[n*2];
        int a=0;
        int b=n;
        for(int i=0;i<n*2;i++)
        {
            if(i%2==0)
            {
                 res[i]=nums[a];
                 a++;
            }
            else{
                res[i]=nums[b];
                b++;
            }
        }
        return res;
    }
}