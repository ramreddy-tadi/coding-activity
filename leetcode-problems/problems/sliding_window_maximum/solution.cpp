class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>de;
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            if(!de.empty()&&de.front()==i-k)
            {
                de.pop_front();
            }
            while(!de.empty()&&nums[de.back()]<=nums[i])
            {
                de.pop_back();
            }
            de.push_back(i);
            if(i>=k-1)
            {
                arr.push_back(nums[de.front()]);
            }
        }
        return arr;
    }
};