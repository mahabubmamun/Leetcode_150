class Solution(object):
    def removeDuplicates(self, nums):
        res = [nums[0]]
        k=1
        for i in range(1,len(nums)):
            if nums[i] != nums[i-1]:
                res.append(nums[i])
                k = k+1
        for i in range(k):
            nums[i] = res[i]
        return k
