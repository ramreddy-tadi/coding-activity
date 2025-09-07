class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size()/3;
        vector<int>vec;
        unordered_map<int,int> freq;
        for(int i:nums)
        {
            freq[i]++;
        }
        for(const auto&[num,count]:freq)
        {
            if(count>n)
            {
                vec.push_back(num);
            }
        }
        return vec;
    }
};