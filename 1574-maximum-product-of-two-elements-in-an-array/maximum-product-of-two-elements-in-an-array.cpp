class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstMax = INT_MIN;
        int secMax = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(firstMax < nums[i])
            {   secMax = firstMax;
                firstMax = nums[i];
            }
            else if(nums[i] > secMax)
            {
                secMax = nums[i]; 
            }   
        }
        int ans = (firstMax - 1) * (secMax - 1);
        return ans;
    }
};