class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int size = prices.size();
        for(int i=1;i<size;i++)
        {
            if(prices[i] > prices[i-1])
            {
                max += prices[i] - prices[i-1];
            }
        }
        return max;
        
    }
};
