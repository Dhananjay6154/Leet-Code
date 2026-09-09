class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0; 
        long long current = 1000;
        if(n < 1000)
        {
            return 0;
        }
        while(current <= n)
        {
            ans += n - current + 1;
            current *= 1000;
        }
        return ans;
    }
};