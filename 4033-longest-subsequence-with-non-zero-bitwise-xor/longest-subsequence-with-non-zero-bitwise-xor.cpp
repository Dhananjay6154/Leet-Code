class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total = 0;
        int len = nums.size();
        
        bool nonZero = false;
        for(auto x : nums)
        {
            total = total ^ x;
            if(x != 0)
            {
                nonZero = true;
            }
        }
        if(total != 0)
        {
            return len;
        }

        if(nonZero)
        {
            return len-1;
        }
        return 0;
    }
};