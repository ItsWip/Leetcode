class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        my_nums = set()
        for num in nums:
            if num in my_nums:
                return True
            else:
                my_nums.add(num)
        return False
