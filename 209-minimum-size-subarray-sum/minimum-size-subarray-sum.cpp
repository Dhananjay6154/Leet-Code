class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int left = 0;
        int right = 0;
        int minLen = INT_MAX;
        int n = nums.size();
        while(right < n)
        {
            sum += nums[right];
            while(sum >= target)
            {
                int len = right - left + 1;
                minLen = min(minLen, len);

                sum -= nums[left];
                left++;
            }
            right++;
        }   
        if(minLen == INT_MAX)
        {
            return 0;
        }
        return minLen;
    }
};