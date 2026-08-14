class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt(c);
        while(i<=j)
        {
            long long sum = 1ll * i*i + 1ll * j*j;
            if(sum == c)
            {
                return true;
            }
            else if(sum > c){
                j--;                
            }
            else{
                i++;
            }
        }
        return false;
        
    }
};