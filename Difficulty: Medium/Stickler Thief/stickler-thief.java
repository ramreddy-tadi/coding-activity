class Solution {
    public int findMaxSum(int arr[]) {
        // code here
        int prev2=arr[0];
        int prev1 = Math.max(arr[0],arr[1]);
        for(int i=2;i<arr.length;i++)
        {
            int pick = arr[i]+prev2;
            int notpick = prev1;
            int curr = Math.max(pick,notpick);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
        
    }
}