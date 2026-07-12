class Solution {
    public boolean canMakeSubsequence(String str1, String str2) {
        if(str2.length()>str1.length())
        {
            return false;
        }
        int n1 = 0;
        int n2 = 0;
        while(n1<str1.length()&&n2<str2.length())
        {
           if(str1.charAt(n1)==str2.charAt(n2))
           {
            n1++;
            n2++;
           }
           else
           {
            int ch = str1.charAt(n1);
            if(ch==122)
            {
                ch=97;
            }
            else{
                ch++;
            }
            char ch2=(char)ch;
            if(ch2==str2.charAt(n2))
            {
                n1++;
                n2++;
            }
            else{
                n1++;
            }
           }
        }
        return n2==str2.length();


    }
}