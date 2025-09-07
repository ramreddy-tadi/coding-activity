class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> freq;
        char ch;
        for(char i:s)
        {
            freq[i]++;
            if(freq[i]>1)
            {
                ch=i;
                break;
            }
        }
        return ch;
    }
};