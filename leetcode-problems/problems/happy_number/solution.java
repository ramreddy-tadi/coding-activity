class Solution {
    public boolean isHappy(int N) {
        int x = N;
        int y = N;
        do
        {
            x = sumOfSquares(x);                  
            y = sumOfSquares(sumOfSquares(y));   
        } while (x != y);
        return (x == 1) ? true : false;
    }
    static int sumOfSquares(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }
}