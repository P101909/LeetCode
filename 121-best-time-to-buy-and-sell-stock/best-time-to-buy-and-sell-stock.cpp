class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp1 = prices[0]; // 5
        int size = prices.size();
        int profit = 0;
        for (int i = 1; i < size; i++) {
            if (temp1 > prices[i])
                temp1 = prices[i];
            // Calc profit
            if (profit < prices[i] - temp1)
                profit = prices[i] - temp1;
        }
        return profit;
    }
};