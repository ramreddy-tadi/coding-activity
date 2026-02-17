class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        
        vector<int> ar(n);
        ar[0] = nums[0];
        ar[1] = max(nums[0], nums[1]);
        
        for (int i = 2; i < n; i++) {
            ar[i] = max(nums[i] + ar[i-2], ar[i-1]);
        }
        return ar[n-1];
    }
};
