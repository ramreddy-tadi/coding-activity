class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(char i:s)
        {
            freq1[i]++;
        }
         for(char i:t)
        {
            freq2[i]++;
        }
        for(char i:t)
        {
            if(freq1[i]!=freq2[i])
            {
                return false;
            }
        }
        return true;
    
    }
};