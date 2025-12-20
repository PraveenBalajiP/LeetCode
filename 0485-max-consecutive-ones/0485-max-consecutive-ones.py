class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        nums.append(0)
        max=0
        p=0
        for i in range(0,len(nums),1):
            if nums[i]==0:
                if i-p>max:
                    max=i-p
                p=i+1
        return max