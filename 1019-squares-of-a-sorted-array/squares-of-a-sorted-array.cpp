class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int s = 0;
        int e = nums.size()-1;
        int i = nums.size()-1;

        while(s <= e)
        {
            int startSq = nums[s] * nums[s];
            int endSq = nums[e] * nums[e];

            if(startSq > endSq)
            {
                ans.push_back(startSq);
                s++;
            }
            else{
                ans.push_back(endSq);
                e--;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};