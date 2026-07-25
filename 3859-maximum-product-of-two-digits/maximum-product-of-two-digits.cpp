class Solution {
public:
    int maxProduct(int n) {
        int first = INT_MIN;
        int second = INT_MIN;
        int ans = 1;

        while(n > 0)
        {
            int digit = n % 10;
            n = n / 10;
            if(digit > first)
            {
                second = first;
                first = digit;
            }
            else if(digit > second)
            {
                second = digit;
            }
        }
        ans = first*second;
        return ans;

    }
};