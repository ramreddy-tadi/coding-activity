class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer>hs = new HashSet<>();
        for(int arr:nums)
        {
            if(hs.contains(arr))
            {
                return true;
            }
            else{
                hs.add(arr);
            }
        }
        return false;
    }
}