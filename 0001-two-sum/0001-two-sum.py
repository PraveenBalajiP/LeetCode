class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d=dict()
        for i,j in enumerate(nums):
            remainder=target-j
            if remainder in d:
                return [d[remainder],i]
            d[j]=i