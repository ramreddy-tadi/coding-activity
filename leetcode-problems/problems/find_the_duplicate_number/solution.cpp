class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        int num=0;
        for(int i:nums)
        {
            freq[i]++;
            if(freq[i]>1)
            {
                num=i;
            }
        }
        return num;
    }
};