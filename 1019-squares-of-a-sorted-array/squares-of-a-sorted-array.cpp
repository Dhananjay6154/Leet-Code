class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans((nums.size()));
        int s = 0;
        int e = nums.size()-1;
        int i = nums.size()-1;

        while(s <= e)
        {
            int startSq = nums[s] * nums[s];
            int endSq = nums[e] * nums[e];

            if(startSq > endSq)
            {
                ans[i] = startSq;
                s++;
            }
            else{
                ans[i] = endSq;
                e--;
            }
            i--;
        }
        return ans;
    }
};