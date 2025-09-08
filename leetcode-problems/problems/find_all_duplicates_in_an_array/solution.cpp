class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>freq;
        set<int>st;
        vector<int>vec;
        for(int i:nums)
        {
            freq[i]++;
            if(freq[i]==2)
            {
                st.insert(i);
            }
        }
        for(int i:st)
        {
            vec.push_back(i);
        }
        return vec;
    }
};