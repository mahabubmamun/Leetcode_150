class Solution(object):
    def majorityElement(self, nums):
        # my solution
        nums.sort()
        temp = 1
        res = nums[0]
        for i in range(0,len(nums)-1):
            if nums[i]==nums[i+1]:
                temp=temp+1
            else:
                if temp>len(nums)/2:
                    return nums[i]
                temp = 1
        if temp > len(nums)/2:
            return nums[-1]
        return res


        # solution 2
        # using sorting
        # nums.sort()
        # return nums[len(nums)/2]


        # solution 3
        # using Moore Voting Algorithm
        # count = 0
        # candidate = 0

        # for i in range(0, len(nums)):
        #     if count == 0:
        #         candidate = nums[i]
        #     if nums[i] == candidate:
        #         count = count + 1
        #     else:
        #         count = count - 1

        # return candidate
        
