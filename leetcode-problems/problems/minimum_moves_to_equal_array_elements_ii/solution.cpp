class Solution {
public:
    int minMoves2(vector<int>& nums) {
    int res=0;
    int indi = nums.size()/2;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        res+=abs(nums[indi]-nums[i]);
    }
    return res;
    }
};