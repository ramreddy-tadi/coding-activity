class Solution {
    public boolean isSubsequence(String s, String t) {
        int sl = s.length();
        int count =0;
        int a =0;
        if(sl==0 && t.length()!=0)
        {
            return true;
        }
        if(sl!=0 && t.length()==0)
        {
            return false;
        }
        for(int i=0;i<t.length()&&a<sl;i++)
        {
            if(s.charAt(a)==t.charAt(i))
            {
                a++;
                count++;
            }
            

        }
        if(sl==count)
        {
            return true;
        }
        else{
            return false;
        }
    }
}