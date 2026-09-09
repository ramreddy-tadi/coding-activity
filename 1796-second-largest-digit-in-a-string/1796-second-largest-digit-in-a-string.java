class Solution {
    public int secondHighest(String s) {
        String st="";
        for(char ch:s.toCharArray())
        {
           if(Character.isDigit(ch))
           {
             st+=ch;
           }
        }
        int n=st.length();
        if(n<2)
        {
            return -1;
        }
        char[] ar = st.toCharArray();
        int[] arr= new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=ar[i]-'0';
        }
        int max1 = -1;
        int max2 = -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max1)
            {
                max2=max1;
                max1=arr[i];
            }
            else if(arr[i]>max2&&arr[i]!=max1)
            {
                max2=arr[i];
            }
        }
        return max2;

    }
}