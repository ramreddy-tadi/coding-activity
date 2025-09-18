class Solution {
public:
    vector<int> frequencySort(vector<int>& arr) {
        unordered_map<int,int>freq;
    for(int i:arr)
    {
        freq[i]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pr;
    for(const auto&pair:freq)
    {
        pr.push({pair.second,pair.first});
    }
    vector<int>ans;
    while(!pr.empty())
    {
        pair<int,int> p1 = pr.top();
        pr.pop();
        int a = p1.first;
        int b = p1.second;
        for(int j=0;j<a;j++)
        {
            ans.push_back(b);
        }
    }
    return ans;
    }
    struct cmp{
        bool operator()(const pair<int,int>&a,const pair<int,int>&b){
            if(a.first==b.first)
            {
               return a.second<b.second;
            }
            return a.first>b.first;
        }
    };
};