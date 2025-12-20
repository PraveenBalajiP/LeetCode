class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        l=list()
        for i in range(0,n):
            l.append(nums[i])
            l.append(nums[i+n])
        return l