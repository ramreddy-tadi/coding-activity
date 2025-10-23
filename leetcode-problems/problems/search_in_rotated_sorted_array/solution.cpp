class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ind=-1;
        int l=0;
        int h = nums.size()-1;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(nums[m]==target)
            {
                ind=m;
                return m;
            }
            else if(nums[l]<=nums[m])
            {
                if(target>=nums[l]&&target<=nums[m])
                {
                    h=m-1;
                }
                else{
                    l=m+1;
                }
            }
            else{
                if(target>=nums[m]&&target<=nums[h])
                {
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
        }
        return ind;
    }
};