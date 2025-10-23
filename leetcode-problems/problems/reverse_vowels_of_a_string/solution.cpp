class Solution {
public:
    string reverseVowels(string s) {
       int l=0;
        int h=s.size()-1;
        while(l<=h)
        {
            if(s[l]=='A'||s[l]=='E'||s[l]=='I'||s[l]=='O'||s[l]=='U'||s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u')
            {
                if(s[h]=='A'||s[h]=='E'||s[h]=='I'||s[h]=='O'||s[h]=='U'||s[h]=='a'||s[h]=='e'||s[h]=='i'||s[h]=='o'||s[h]=='u')
                {
                     char ch = s[l];
                     s[l]=s[h];
                     s[h]=ch;
                     l++;
                     h--;
                }
                else{
                    h--;
                }
            }
            else{
                l++;
            }
        }
        return s;
    }
};