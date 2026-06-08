class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int left = 0;
        for (int right = 0; right < prices.size(); right++) {
            int prof = prices[right] - prices[left];
            if (prof < 0) {
                left = right;
                continue;
            }
            if (prof>max_profit) max_profit = prof;
        }
        return max_profit;
    }
};
