class Solution {
public:
    bool isPerfectSquare(int num) {
        int ar = (int)sqrt(num);
        if(ar*ar==num)
        {
            return true;
        }
        else{
            return false;
        }
    }
};