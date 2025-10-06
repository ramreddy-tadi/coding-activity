class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int>res;
       for(int ch:nums)
       {
        if(ch!=val)
        {
          res.push_back(ch);
        }
       }
       nums.insert(nums.begin(),res.begin(),res.end());
       return res.size();
    }
};