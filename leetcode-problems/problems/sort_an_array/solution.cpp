class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
    void merge(vector<int>&arr,int l,int r,int mid)
    {
        int i=l;
        int j=mid+1;
        int k=0;
        int n = r-l+1;
        int temp[n];
        while(i<=mid&&j<=r)
        {
            if(arr[i]<=arr[j])
            {
                temp[k]=arr[i];
                i++;
                k++;
            }
            else{
                temp[k]=arr[j];
                j++;
                k++;
            }
        }
        while(i<=mid)
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        while(j<=r)
        {
            temp[k]=arr[j];
            j++;
            k++;
        }
        for(int c=0;c<n;c++)
        {
            arr[l+c]=temp[c];
        }
    }
void mergeSort(vector<int>&arr, int l, int r) {
        if(l<r)
        {
            int mid = l+(r-l)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,r,mid);
        }
    }

};