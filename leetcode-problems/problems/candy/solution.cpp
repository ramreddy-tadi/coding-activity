class Solution {
public:
    int candy(vector<int>& arr) {
        int n= arr.size();
        vector<int>right(n,1);
        vector<int>left(n,1);
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
                right[i]=right[i-1]+1;
            }
            if(arr[n-(i+1)]>arr[n-i])
            {
                left[n-(i+1)]=left[n-i]+1;
            }
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=max(right[i],left[i]);
        }
        return res; 
    }
};