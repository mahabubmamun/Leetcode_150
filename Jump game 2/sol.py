class Solution(object):
    def jump(self, nums):
        size = len(nums)
        min_jump, current, farthest = 0, 0, 0
        for i in range(0, size-1):
            farthest = max(farthest, i + nums[i])
            if(i == current):
                min_jump += 1
                current = farthest
        return min_jump

        
