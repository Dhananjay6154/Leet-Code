class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini = INT_MAX;
        int secMINI = INT_MAX;
        int total = 0;

        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < mini)
            {
                secMINI = mini;
                mini = prices[i];
            }
            else if(prices[i] < secMINI)
            {
                secMINI = prices[i];
            }
        }
        total = secMINI + mini;
        if(total > money)
        {
            return money;
        }
        return money - total;
        
    }
};