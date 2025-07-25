class Solution {
    public boolean isPalindrome(int x) {
        int num = x;
        int rev =0;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            int last = x%10;
            rev = rev*10+last;
            x=x/10;
        }
        if(num==rev)
        {
            return true;
        }
        else{
            return false;
        }
    }
}