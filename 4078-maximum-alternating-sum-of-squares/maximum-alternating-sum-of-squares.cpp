class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long num = 0;
        vector<long long> v1;

        for(int i=0;i<nums.size();i++)
        {
            long long sq =0;
            sq = 1LL * nums[i] * nums[i];
            v1.push_back(sq);
        }
        sort(v1.begin(),v1.end());

        vector<long long> ans(v1.size());
        long long sum = 0;
        int even = 0;
        int odd = 1;
        for(int i=v1.size() - 1; i>=0 ; i--)
        {
            if(even < ans.size())
            {
                ans[even] = v1[i];
                even = even + 2;
            }
            else{
                ans[odd] = v1[i];
                odd = odd + 2;
            }
        } 
        for(int i=0;i<ans.size();i++)
        {
            if(i % 2 == 0)
            { 
                sum+=ans[i];
            }
            else{
                sum -= ans[i];
            }
        }  
        return sum;
    }
};