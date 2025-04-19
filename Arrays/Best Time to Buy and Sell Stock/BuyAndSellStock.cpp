class Solution
{
public:
    void maxProfit(vector<int> &prices)
    {
        int profit = 0;
        int pointer_left = 0;
        int pointer_right = 1;
        int curr_profit = 0;
        while (pointer_right < prices.size())
        {
            if (prices[pointer_left] < prices[pointer_right])
            {
                curr_profit = prices[pointer_right] - prices[pointer_left];
                if (curr_profit > profit)
                {
                }
            }
        }
    }
};