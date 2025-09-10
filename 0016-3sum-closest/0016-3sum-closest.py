class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        min=inf
        for i in range(0,len(nums)-2,1):
            l=i+1
            r=len(nums)-1
            while l<r:
                sum=nums[i]+nums[l]+nums[r]
                if abs(sum-target)<min:
                    min=abs(sum-target)
                    s=sum
                if sum<target:
                    l=l+1
                if sum>target:
                    r=r-1
                if sum==target:
                    return target

        return s