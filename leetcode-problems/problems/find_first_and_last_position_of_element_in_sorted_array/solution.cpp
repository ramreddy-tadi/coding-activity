class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
         vector<int>res;
        int a = binarysearchfirst(arr,arr.size(),x);
        int b=  binarysearchlast(arr,arr.size(),x);
        res.push_back(a);
        res.push_back(b);
        return res;
    }
    int binarysearchfirst(vector<int>&arr, int n, int target) 
    {
    set<int> st;
    int l = 0, h = n - 1;
    while (l <= h) 
    {
        int m = l + (h - l) / 2;
        if (arr[m] == target) 
        {
            st.insert(m);
            h = m - 1;
        } 
        else if (target < arr[m]) 
        {
            h = m - 1;
        } 
        else 
        {
            l = m + 1;
        }
    }
    if (!st.empty())
        return *st.begin();
    else
        return -1;
}
int binarysearchlast(vector<int>&arr, int n, int target) 
{
    set<int> st;
    int l = 0, h = n - 1;
    while (l <= h) 
    {
        int m = l + (h - l) / 2;
        if (arr[m] == target) 
        {
            st.insert(m);
            l = m + 1;
        } 
        else if (target < arr[m]) 
        {
            h = m - 1;
        } 
        else 
        {
            l = m + 1;
        }
    }
    if (!st.empty())
        return *st.rbegin();
    else
        return -1;
}
};