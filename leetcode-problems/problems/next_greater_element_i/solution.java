class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int n1= nums1.length;
        int[] res = new int[n1];
        int n2 = nums2.length;
        Map<Integer,Integer>mp=new HashMap<>();
        Stack<Integer>st = new Stack<>();
        for(int i=n2-1;i>=0;i--)
        {
            while(!st.isEmpty()&&nums2[i]>=st.peek())
            {
                st.pop();
            }
            int re = st.isEmpty()?-1:st.peek();
            mp.put(nums2[i],re);
            st.push(nums2[i]);
        }
        for(int i=0;i<n1;i++)
        {
            res[i]=mp.get(nums1[i]);
        }
        return res;
    }
}