class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int ch:nums)
        {
            if(ch!=0)
            {
                nums[i]=ch;
                i++;
            }
        }
        while(i<nums.size())
        {
            nums[i]=0;
            i++;
        }
    }
};