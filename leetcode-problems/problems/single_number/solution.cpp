class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> freq;
        for(int i:nums)
        {
            freq[i]++;
        }
        for(int i:nums)
        {
            if(freq[i]==1){
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};