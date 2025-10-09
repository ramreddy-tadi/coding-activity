class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(int ch:nums)
        {
            if(ch%2==0)
            {
                even.push_back(ch);
            }
            else{
                odd.push_back(ch);
            }
        }
    for(int ch:odd)
    {
        even.push_back(ch);
    }
    return even;
    }
};