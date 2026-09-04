class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int j = 0;
        for(int i=0;i<nums.size();i++)
        {
            int leftMax = nums[0];
            for(int j=0;j<=i;j++)
            {
                leftMax = max(leftMax,nums[j]);
            }

            int rightMin = nums[i];
            for(int j=i;j<nums.size();j++)
            {
                rightMin = min(rightMin,nums[j]);
            }

            int ans = leftMax - rightMin;
            if(ans <= k)
            {
                return i;
            }
        }
        return -1;

    }
};