class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l=[]
        if target in nums:
            first=nums.index(target)
        else:
            first=-1
        nums.reverse()
        if target in nums:
            s=nums.index(target)
            second=len(nums)-s-1
        else:
            second=-1
        l=[first,second]
        return l