class Solution {
    public int maxProfit(int[] prices) {
        int size = prices.length;
        int buy = prices[0];
        int max = 0;
        for(int i=1;i<size;i++)
        {
            if(prices[i]<buy)
            {
                buy = prices[i];
            }
            else
            {
                int temp = prices[i] - buy;
                if(temp > max)
                {
                    max = temp;
                }
            }
        }
        return max;
    }
}
