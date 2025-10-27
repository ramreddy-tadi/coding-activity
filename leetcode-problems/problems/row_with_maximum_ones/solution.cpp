class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index=0;
        int max=0;
        int rows =mat.size();
        int cols = mat[0].size();
        for(int i=0;i<rows;i++)
        {
            int count=0;
            for(int j=0;j<cols;j++)
            {
               if(mat[i][j]==1)
               {
                count++;
               }
            }
            if(count>max)
            {
                max=count;
                index=i;
            }
        }
        return vector<int>{index,max};
    }
};