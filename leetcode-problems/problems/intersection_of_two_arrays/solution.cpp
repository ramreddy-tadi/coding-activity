class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        set<int>st;
        unordered_map<int,int>freq;
        for(int i:nums1)
        {
            freq[i]++;
        }
        for(int i:nums2)
        {
            st.insert(i);
        }
        vector<int>r1(st.begin(),st.end());
        for(int i:r1)
        {
            if(freq[i]>0)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};