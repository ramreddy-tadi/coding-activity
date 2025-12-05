class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
     unordered_set<int>st;
     int sum=0;
     int repeat=-1;
     for(int i=0;i<nums.size();i++)
     {
        if(st.find(nums[i])==st.end())
        {
           st.insert(nums[i]);
        }
        else{
            repeat=nums[i];
        }
        sum+=i+1;
     }
     vector<int>v1(st.begin(),st.end());
     int sum2=0;
     for(int ve:v1){
        sum2+=ve;
     }
     int num = sum-sum2;
     return vector<int>{repeat,num};
     
    }
};