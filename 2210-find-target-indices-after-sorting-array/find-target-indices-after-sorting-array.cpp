class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());

        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i] == target)
        //     {
        //         ans.push_back(i);
        //     }
        // }   
        // return ans;

//BINARY SEARCH
        int s = 0;
        int e = nums.size()-1;
        int first = -1;
        while(s <= e)
        {
            int mid = s + (e-s) / 2;

            if(nums[mid] == target)
            {
                first = mid;
                e = mid - 1;
            }
            else if(nums[mid] < target)
            {
                s = mid + 1; 
            }
            else{
                e = mid-1;
            }
        }

// Last Occurance
        s = 0;
        e = nums.size()-1;        
        int last = -1;            
        while(s <= e)
        {
            int mid = s + (e-s) / 2;

            if(nums[mid] == target)
            {
                last = mid;
                s = mid + 1;
            }
            else if(nums[mid] < target)
            {
                s = mid + 1; 
            }
            else{
                e = mid-1;
            }
        }
        // Add All indices
        if(first != -1)
        {
            for(int i=first;i<=last;i++)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};