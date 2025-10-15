class Solution {
public:
    int search(vector<int>& nums, int target) {
    int ind=-1;
    int l = 0, h = nums.size() - 1;
    while (l <= h) 
    {
        int m = l + (h - l) / 2;
        if (nums[m] == target) 
        {
            ind=m;
            break;
        } 
        else if (target < nums[m]) 
        {
            h = m - 1;
        } 
        else 
        {
            l = m + 1;
        }
    }
    return ind;
    }
};