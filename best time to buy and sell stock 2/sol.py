class Solution(object):
    def maxProfit(self, prices):
        buy = prices[0]
        max = 0
        size = len(prices)

        for i in range(1, size):
            if prices[i] > prices[i-1]:
                temp = prices[i] - prices[i-1]
                max = max + temp
        return max


        # Time complexity O(n)
        # Space complexity O(1)

        
