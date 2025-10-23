class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>fr;
        for(int i=0;i<nums.size();i++)
        {
            if(fr.count(nums[i]))
            {
                if(abs(i-fr[nums[i]])<=k)
                {
                    return true;
                }
            }
            fr[nums[i]]=i;
        }
        return false;
    }
};