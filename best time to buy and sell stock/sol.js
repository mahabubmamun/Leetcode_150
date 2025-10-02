/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let len = prices.length;
    let max = 0;
    let buy = prices[0];
    for(let i=1;i<len;i++)
    {
        if(prices[i] < buy)
        {
            buy = prices[i];
        }
        else
        {
            let temp = prices[i] - buy;
            if(temp > max)
            {
                max = temp;
            }
        }
    }
    return max;
};
