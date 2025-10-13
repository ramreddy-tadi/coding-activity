class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ch = letters[0];
        int aw = target;
        for(char ch1:letters)
        {
           int aw1 = ch1;
           if(aw1>aw)
           {
            ch=ch1;
            break;
           }
        }
        return ch;
    }
};