class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int>v1=heights;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=v1[i])
            {
                count++;
            }
        }
        return count;
    }
};