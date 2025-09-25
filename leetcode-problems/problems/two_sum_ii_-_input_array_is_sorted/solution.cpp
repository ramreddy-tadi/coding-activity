class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>st;
        vector<int>vc;
        int n=numbers.size();
        for(int i=0;i<n;i++)
        {
            int remai = target-numbers[i];
            if(st.find(remai)!=st.end())
            {
                vc.push_back(st[remai]+1);
                vc.push_back(i+1);
            }
            st[numbers[i]]=i;
        }
        return vc;
    }
};