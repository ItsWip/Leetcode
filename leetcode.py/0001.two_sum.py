class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map={}

        for i, num in enumerate(nums):
            map[num]= i

        for i, num in enumerate(nums):
            x= target - num
            if x in map and map[x] != i:
                return i, map[x] 