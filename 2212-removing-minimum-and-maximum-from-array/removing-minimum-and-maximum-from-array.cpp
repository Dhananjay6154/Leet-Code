class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int minIndex = 0;
        int maxIndex = 0;

        for(int i=0;i<nums.size();i++)
        {
            mini = min(mini,nums[i]); 
            maxi = max(maxi,nums[i]);

            if(nums[i] == mini)
            {
                minIndex = i;
            }
            if(nums[i] == maxi)
            {
                maxIndex = i;
            }
        }
        int left = min(minIndex,maxIndex);
        int right = max(minIndex,maxIndex);
        int size = nums.size();
        int removeFront = right + 1;
        int removeBack = size - left;
        int removeFromBoth = (left + 1) + (size - right);
        int ans = min(removeFront,min(removeBack,removeFromBoth));
        return ans;

        
    }
};