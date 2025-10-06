class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp1 = prices[0]; //Our buying place
        int size = prices.size();
        int profit = 0;
        for (int i = 1; i < size; i++) {
            if (temp1 > prices[i]) //If there is a stock that is cheaper
                temp1 = prices[i]; //We will buy that stcok instead
            // Calc profit
            if (profit < prices[i] - temp1) //If profit is more at selling at prices[i]
                profit = prices[i] - temp1; 
        }
        return profit;
    }
};