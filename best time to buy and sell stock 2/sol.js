/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {

    let max = 0;
    let size = prices.length;
    for(let i=1;i<size;i++)
    {
        if(prices[i] > prices[i-1])
        {
            max += prices[i] - prices[i-1];
        }
    }
    return max;
};
