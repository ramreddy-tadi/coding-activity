class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        int ans;
        unordered_map<int,int> freq;
        for(int i:nums)
        {
            freq[i]++;
            if(freq[i]>n)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};