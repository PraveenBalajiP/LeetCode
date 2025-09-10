class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        list1=[]
        nums.sort()
        for i in range(0,len(nums)-2,1):
            l=i+1
            r=len(nums)-1
            if i>0 and nums[i]==nums[i-1]:
                continue
            while l<r:
                sum=nums[i]+nums[l]+nums[r]
                if sum<0:
                    l=l+1
                elif sum>0:
                    r=r-1
                elif sum==0:
                    list1.append([nums[i],nums[l],nums[r]])
                    while l<r and nums[l]==nums[l+1]:
                        l=l+1
                    while l<r and nums[r]==nums[r-1]:
                        r=r-1
                    l=l+1
                    r=r-1
        return list1