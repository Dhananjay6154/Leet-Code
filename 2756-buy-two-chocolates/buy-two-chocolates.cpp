class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int mini = prices[0];
        int secMINI = prices[1];
        int total = 0;

        total = secMINI + mini;
        if(total > money)
        {
            return money;
        }
        return money-total;

        
    }
};