class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int diff =abs(nums[i] - nums[j]);
                if(diff==k) count++;
            }
        }
        return count;
    }
};