int maxProfit(int* prices, int pricesSize) {
    int buy = prices[0];
    int max = 0;
    for(int i=1;i<pricesSize;i++)
    {
        if(prices[i] < buy)
        {
            buy = prices[i];
        }
        else
        {
            int temp = prices[i] - buy;
            if(max<temp)
            {
                max = temp;
            }
        }
    }
    return max;
}
