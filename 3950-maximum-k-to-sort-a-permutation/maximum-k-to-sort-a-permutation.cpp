class Solution {
public:

    int sortPermutation(vector<int>& nums) {
        vector<int> vc;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != i)
            {
                vc.push_back(i);
            }
        }
        if(vc.empty())
        {
            return 0;
        }

        int ans = nums[vc[0]];
        for(int i=1;i<vc.size();i++)
        {
            ans = ans & nums[vc[i]];
        }
        return ans;
    }
};