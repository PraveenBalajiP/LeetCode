class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l=0
        for i in range(0,len(nums),1):
            if nums[i]!=nums[l]:
                l=l+1
                nums[l]=nums[i]           
        return l+1