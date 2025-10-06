class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        for(int in:nums)
        {
            st.insert(in);
        }
        nums.insert(nums.begin(),st.begin(),st.end());
        return st.size();

    }
};