class Solution(object):
    def canJump(self, nums):
        size = len(nums)
        val = 0
        for i in range(0, size):
            if i > val:
                return False
            val = max(val, i+nums[i])
        return True

        
