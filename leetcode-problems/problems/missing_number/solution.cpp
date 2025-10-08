class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int tot = (n*(n+1))/2;
        int sum = 0;
        for(int ch:nums)
        {
            sum+=ch;
        }
        return tot-sum;
    }
};