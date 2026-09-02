class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.length()==1)
        {
            return 1;
        }
        HashMap<Character,Integer> hm = new HashMap<>();
        int l=0;
        int maxi=0;
        for(int r=0;r<s.length();r++)
        {
            if(hm.containsKey(s.charAt(r)))
            {
               l=Math.max(l,hm.get(s.charAt(r))+1);
            }
            hm.put(s.charAt(r),r);
            maxi=Math.max(maxi,r-l+1);

        }
        return maxi;
    }
}