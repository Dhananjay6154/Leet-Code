class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int leftSum = 0;
        int rightSum = 0;
        int leftQ = 0;
        int rightQ = 0;

        for(int i=0;i<n / 2;i++)
        {
            if(num[i] == '?')
            {
                leftQ++;
            }
            else{
                leftSum += num[i] - '0';
            }
        }
        for(int i = n/2;i<num.size();i++)
        {
            if(num[i] == '?')
            {
                rightQ++;
            }   
            else{
                rightSum += num[i] - '0';
            }
        }
        
        int diff = leftSum - rightSum;
        int Qdiff = leftQ - rightQ;

        if (Qdiff % 2 != 0)
            return true;

        return diff != 9 * (rightQ - leftQ) / 2;
    }
};