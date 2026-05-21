class Solution {
    public int compress(char[] chars) {
        String st1="";
        if(chars.length==1)
        {
            return 1;
        }
        int count=1;
        for(int i=0;i<chars.length-1;i++)
        {
             if(chars[i]==chars[i+1])
             {
                count++;
                if((i+1)==chars.length-1)
                {
                    st1+=chars[i];
                    String st = String.valueOf(count);
                    st1+=st;
                }
             }
             else{
                if(count==1)
                {
                    st1+=chars[i];
                }
                else{
                    st1+=chars[i];
                    String st = String.valueOf(count);
                    st1+=st;
                }
                count=1;
             }
        }
        if(chars[chars.length-1]!=chars[chars.length-2])
        {
                st1+=chars[chars.length-1];
        }
        int k=0;
        for(char ch:st1.toCharArray())
        {
            chars[k]=ch;
            k++;
        }
        return st1.length();
    }
}