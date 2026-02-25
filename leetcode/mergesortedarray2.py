from typing import List  # <-- Import List from typing module

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """

        check_idx = m-1
        swap_idx = n

        for i in range(len(nums2)):
            nums1[m] = nums2[i]
            m+=1

        nums1.sort()

        print(nums1)





nums1 = [1,2,3,0,0,0]
m=3
nums2 = [2,5,6]
n=3

Solution().merge(nums1,m,nums2,n)

