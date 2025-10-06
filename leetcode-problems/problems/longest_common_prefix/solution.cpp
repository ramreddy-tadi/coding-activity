class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = 111111111;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].size()<len)
            {
                len=strs[i].length();
            }
        }
        string res="";
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i]!=strs[j+1][i])
                {
                    return res;
                }
            }
            res+=strs[0][i];
        }
        return res;
    }
};