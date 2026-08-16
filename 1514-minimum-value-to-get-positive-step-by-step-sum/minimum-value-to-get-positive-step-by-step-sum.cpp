class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> vt;
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            vt.push_back(sum);
        }
        int mini = 0;
        for(auto x:vt)
        {
            mini = min(mini,x);
        }
        return abs(mini) + 1;
        
    }
};