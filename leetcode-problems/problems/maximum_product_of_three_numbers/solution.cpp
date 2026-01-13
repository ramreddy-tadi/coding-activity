class Solution {
public:
    int maximumProduct(vector<int>& A) {
    sort(A.begin(),A.end());
    int res1=A[0]*A[1]*A[A.size()-1];
    int res2=A[A.size()-1]*A[A.size()-2]*A[A.size()-3];
    return max(res1,res2);
    }
};