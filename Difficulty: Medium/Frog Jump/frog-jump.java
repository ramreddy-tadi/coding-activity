class Solution {
    int minCost(int[] height) {
        // code here
        if(height.length ==1)
        {
            return 0;
        }
        if(height.length==2)
        {
            return Math.abs(height[1]-height[0]);
        }
        int prev2 = 0;
        int prev1 = Math.abs(height[1]-height[0]);
        for(int i=2;i<height.length;i++)
        {
            int curr1 = Math.abs(height[i]-height[i-1])+prev1;
            int curr2 = Math.abs(height[i]-height[i-2])+prev2;
            prev2=prev1;
            prev1=Math.min(curr1,curr2);
        }
        return prev1;
        
    }
}