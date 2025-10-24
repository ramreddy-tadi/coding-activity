class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i:nums2)
        {
            nums1.push_back(i);
        }
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==0)
        {
            int m = nums1.size()/2;
            int m1 = m-1;
            double res = (nums1[m]+nums1[m1])/2.0;
            return res;
        }
        else{
            int m = nums1.size()/2;
            double res = (nums1[m]);
            return res;
        }
    }
};