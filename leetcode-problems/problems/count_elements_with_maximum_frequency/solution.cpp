class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int,int> freq;
        int sum=0;
        int maxfreq=0;
        for(int i:nums)
        {
            freq[i]++;
        }
        for(const auto&[num,count]:freq)
        {
            if(count>=maxfreq)
            {
                maxfreq=count;
            }
        }
        for(const auto&[num,count]:freq)
        {
            if(count==maxfreq)
            {
                sum+=count;
            }
        }
        return sum;
    }
};