class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
            int target = nums[i]+k;
            if(i!=0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int left = i+1;
            int right = nums.size()-1;
            int mid = left+(right-left) / 2;
            while(left <= right)
            {
                int mid = left+(right-left) / 2;

                if(nums[mid] == target)
                {
                    ans++;
                    break;
                }
                else if(nums[mid] < target)
                {
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
        }
        return ans;
        
        // int ans = 0;

        // for(int i=0;i<nums.size();i++)
        // {
        //     if(i!=0 && nums[i] == nums[i-1])
        //     {
        //         continue;
        //     }
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[j] - nums[i] == k)
        //         {
        //             ans++;
        //             break;
        //         }
        //     }
        // }    
        // return ans;    
    }
};