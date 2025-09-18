class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
    vector<int>vec;
    unordered_map<int,int>freq;
    for(int i:arr)
    {
        freq[i]++;
    }
    for(const auto&pair:freq)
    {
        if(pair.second==1)
        {
          vec.push_back(pair.first);
        }
    }
    return vec;
    }
};