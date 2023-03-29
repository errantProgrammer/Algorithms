class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        sol = []
        i = 0
        j = 0
        k = 0
        while i < len(nums1) and j < len(nums2):
            if nums1[i] < nums2[j]:
                sol.insert(k,nums1[i])
                i = i + 1
            else:
                sol.insert(k,nums2[j])
                j = j + 1
            k = k + 1
        while i < len(nums1):
            sol.insert(k,nums1[i])
            k = k + 1
            i = i + 1
        while j < len(nums2):
            sol.insert(k,nums2[j])
            k = k + 1
            j = j + 1
        cant = len(sol)
        if cant % 2 == 1 or cant == 1:
            return sol[cant / 2]
        else:
            print(sol[cant/2])
            print(sol[cant/2 - 1])
            return float(sol[cant / 2] + sol[cant/2 - 1]) / 2

# Solution 2
class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums1 += nums2
        nums1.sort()
        if len(nums1) % 2 == 1:
            return nums1[len(nums1) / 2]
        else:
            return float(nums1[len(nums1) / 2] + nums1[len(nums1) / 2 - 1]) / 2