class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> vis(26, false);
        for (char c : sentence)
        {
            if (isalpha(c)) 
            {
                vis[tolower(c) - 'a'] = true;
            }
        }
        for (int i = 0; i < 26; ++i) 
        {
            if (!vis[i])
                return false;
        }
        return true;
    }
};