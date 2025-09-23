class Solution(object):
    def removeDuplicates(self, nums):
        size = len(nums)
        if size <= 2:
            return size
        k = 2
        for i in range(2, size):
            if nums[i] != nums[k-2]:
                nums[k] = nums[i]
                k = k + 1
        return k
