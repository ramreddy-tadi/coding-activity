class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.size()-1;i++)
        {
            int num1 = s[i];
            int num2 = s[i+1];
            sum+=abs(num1-num2);
        }
        return sum;
    }
};