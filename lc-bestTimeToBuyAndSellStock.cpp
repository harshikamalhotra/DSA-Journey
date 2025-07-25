class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max = INT_MIN;
        int profit = 0;
        int n = prices.size();
        for (int i = n - 1; i >= 0; --i)
        {
            if (prices[i] > max)
            {
                max = prices[i];
            }
            else
            {
                if (max - prices[i] > profit)
                {
                    profit = max - prices[i];
                }
            }
        }
        return profit;
    }
};