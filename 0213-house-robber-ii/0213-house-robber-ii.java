class Solution {
     public static int maxi(int n,int arr[])
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return arr[0];
        }
        int p2 = arr[0];
        int p1 = Math.max(arr[0],arr[1]);
        for(int i=2;i<n;i++)
        {
            int pick = arr[i]+p2;
            int notpick = p1;
            int curr = Math.max(pick,notpick);
            p2=p1;
            p1=curr;
        }
        return p1;
    }
    public int rob(int[] arr) {
        if(arr.length==1)
        {
            return arr[0];
        }
        int[] arr1= new int[arr.length-1];
        int[] arr2= new int[arr.length-1];
        for(int i=0;i<arr.length-1;i++)
        {
            arr1[i]=arr[i];
            arr2[i]=arr[i+1];
        }
        int x = maxi(arr1.length,arr1);
        int y = maxi(arr1.length,arr2);
        return Math.max(x,y);
    }
}


   