class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>st;
        vector<int>vc;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int remai = target-nums[i];
            if(st.find(remai)!=st.end())
            {
                vc.push_back(st[remai]);
                vc.push_back(i);
            }
            st[nums[i]]=i;
        }
        return vc;
    }
};