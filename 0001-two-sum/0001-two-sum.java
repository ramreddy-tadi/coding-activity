class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] arr = new int[2];
        HashMap<Integer,Integer>st = new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
           int rem = target-nums[i];
           if(st.containsKey(rem))
           {
            arr[0]=st.get(rem);
            arr[1]=i;
            return arr;
           }
           st.put(nums[i],i);
        }
        return arr;
    }
}