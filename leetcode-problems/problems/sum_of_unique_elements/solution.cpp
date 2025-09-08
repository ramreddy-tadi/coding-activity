class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum =0;
        unordered_map<int,int>freq;
        for(int i:nums)
        {
            freq[i]++;
        }
        for(int i:nums)
        {
            if(freq[i]==1)
            {
                sum+=i;
            }
        }
        return sum;
    }
};