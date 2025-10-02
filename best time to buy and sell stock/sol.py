class Solution(object):
    def maxProfit(self, prices):
        # here the time complexity is O(n^2)
        # max = 0
        # size = len(prices)
        # for i in range(0, size):
        #     temp = prices[i]
        #     for j in range(i, size):
        #         if temp>prices[j]:
        #             continue
        #         else:
        #             if (prices[j] - temp) > max:
        #                 max = prices[j] - temp
        # return max



        buy = prices[0]
        max = 0
        for i in range(1, len(prices)):
            if prices[i] < buy:
                buy = prices[i]
            else:
                temp = prices[i] - buy
                if temp > max:
                    max = temp
        return max
