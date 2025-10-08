class Solution {
public:
    char findTheDifference(string s, string t) {
        char et;
        unordered_map<char,int>re1;
        unordered_map<char,int>re2;
        for(char ch:s)
        {
            re1[ch]++;
        }
        for(char ch:t)
        {
            re2[ch]++;
        }
         for(char ch:t)
        {
            if(re1[ch]!=re2[ch])
            {
                et=ch;
            }
        }
        return et;
    }
};