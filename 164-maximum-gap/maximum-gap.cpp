class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int gap = 0;
        int maxGap = 0;
        if(nums.size() < 2) 
        {
            return 0;
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            gap = abs(nums[i] - nums[i+1]);
            maxGap = max(gap,maxGap);
        }
        return maxGap;
        
    }
};