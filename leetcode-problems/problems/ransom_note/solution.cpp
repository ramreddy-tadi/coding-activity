class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(char i:ransomNote)
        {
            freq1[i]++;
        }
        for(char i:magazine)
        {
            freq2[i]++;
        }
        for(char i:ransomNote)
        {
            if(freq1[i]>freq2[i])
            {
                return false;
            }
        }
        return true;
    }
};