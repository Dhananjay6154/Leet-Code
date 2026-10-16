class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        // long long score = 0;

        // while(k--)
        // {
        //     int maxIndex = 0;
        //     for(int i=1;i<nums.size();i++)
        //     {  
        //         if(nums[i] > nums[maxIndex])
        //         {
        //             maxIndex = i;
        //         }
        //     }

        //     score += nums[maxIndex];
        //     nums[maxIndex] = (nums[maxIndex] + 2) / 3; 
        // }
        // return score;
        priority_queue<int> pq;

        long long score = 0;
        for(auto x : nums)
        {
            pq.push(x);
        }

        while(k--)
        {
            int x = pq.top();
            pq.pop();

            score += x;

            x = (x+2) / 3;

            pq.push(x);
        }
        return score;
    }
};