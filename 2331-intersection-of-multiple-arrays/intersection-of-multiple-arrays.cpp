class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> mp;
        for(auto num : nums)
        {
            for(auto x:num)
            {
                mp[x]++;
            }
        }
        vector<int> ans;
        for(auto [x, count] : mp)
        {
            if(count == nums.size())
            {
                ans.push_back(x);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
                
    }
};