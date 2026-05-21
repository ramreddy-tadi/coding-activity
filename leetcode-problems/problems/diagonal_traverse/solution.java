class Solution {
    public int[] findDiagonalOrder(int[][] mat) {
        int n = mat.length;
        int m = mat[0].length;
        int[] arr=new int[m*n];
        int k=0;
        for(int i=0;i<n+m-1;i++)
        {
            int row,col;
            if(i%2==0)
            {
                row=(i<n)?i:n-1;
                col=i-row;
                while(row>=0&&col<m)
                {
                    arr[k]=mat[row][col];
                    row--;
                    col++;
                    k++;
                }
            }
            else{
                col=(i<m)?i:m-1;
                row=i-col;
                while(col>=0&&row<n)
                {
                    arr[k]=mat[row][col];
                    row++;
                    col--;
                    k++;
                }
            }
        }
        return arr;
    }
}