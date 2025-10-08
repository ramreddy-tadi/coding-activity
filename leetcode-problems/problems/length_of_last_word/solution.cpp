class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>res;
        stringstream ss(s);
        string word;
        while(ss>>word)
        {
            res.push_back(word);
        }
        int l = res.size();
        return res[l-1].size();
    }
};