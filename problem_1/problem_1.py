class Solution(object):
    def merge(self, nums1, m, nums2, n):
        res = []
        res = nums1[:m] + nums2[:n]
        res.sort()
        for i in range(m+n):
            nums1[i]=res[i]

        return res
