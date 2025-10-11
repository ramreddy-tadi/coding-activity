class Solution {
public:
    int kthFactor(int n, int k) {
         vector<int> list;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                list.push_back(i);
                if(i!=n/i)
                {
                    list.push_back(n/i);
                }
            }
        }
        sort(list.begin(),list.end());
        if(k<=list.size())
        {
            int res = list[k-1];
            return res;
        }
        return -1;
    }
};