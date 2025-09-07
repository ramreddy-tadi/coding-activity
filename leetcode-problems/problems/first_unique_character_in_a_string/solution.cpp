class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        int tt=-1;
        for(char i:s)
        {
            freq[i]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(freq[s[i]]==1)
            {
                tt=i;
                break;
            }
        }
        return tt;
    }
};