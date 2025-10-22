class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>st;
        for(int i:nums)
        {
            st.insert(i);
        }
        vector<int>nums1(st.begin(),st.end());
        if(nums1.size()<3)
        {
            return nums1[nums1.size()-1];
        }
        else
        {
            return nums1[nums1.size()-3];
        }
    }
};