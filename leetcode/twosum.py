"""
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]



Constraints:

    2 <= nums.length <= 104
    -109 <= nums[i] <= 109
    -109 <= target <= 109
    Only one valid answer exists.


Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

"""
from typing import List  # <-- Import List from typing module

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        pair_idx = {}



        for i, num in enumerate(nums):
            print(f"this is idx:number = ", i,":",num)
            # print(f"this is i = ", i)
            # print(f"this is num = ", num, "\n")
            print(f"\tpair idx = ", pair_idx)
            if target - num in pair_idx:
                print(f"target - num = ", target-num)
                return [i, pair_idx[target - num]]
            pair_idx[num] = i


        return []

# Define the __init__ method inside the Solution class if you want it to be part of the class
solution = Solution()  # Creating an instance of the Solution class

nums = [15, 2, 11, 7]
target = 9

numsEnum = enumerate(nums)

print(numsEnum)

# Calling the twoSum method on the instance `solution`
result = solution.twoSum(nums, target)

# Printing the result
print(f"The indices of the two numbers that sum to {target} are: {result}")