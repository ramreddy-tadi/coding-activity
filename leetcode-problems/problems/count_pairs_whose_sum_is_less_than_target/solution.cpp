class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff =nums[i] + nums[j];
                if(diff<target) count++;
            }
        }
        return count;
    }
};