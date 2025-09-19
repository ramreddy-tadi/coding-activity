class Solution {
    public boolean isAnagram(String s1, String s2) 
    {
        if(s1.length()!=s2.length()) return false;
        else
        {
            char ch[] = new char[26];
            for(int i=0;i<s1.length();i++)
            {
                char c1 = s1.charAt(i);
                char c2 = s2.charAt(i);
                ch[c1-'a']++;
                ch[c2-'a']--;
            }
            for(int i=0;i<26;i++)
            {
                if(ch[i]!=0) return false;
            }
            return true;
        }
    }
}