class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxlen=0;
        int l=0;
        unordered_set<char>freq;
        for(int r=0;r<n;r++)
        {
            while(freq.count(s[r]))
            {
                freq.erase(s[l]);
                l++;
            }
            freq.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
    }
};