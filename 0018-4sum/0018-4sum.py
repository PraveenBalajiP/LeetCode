class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        set1=set(nums)
        set2=set()
        list1=[]
        for i in range(0,len(nums)-2,1):
            for j in range(i+1,len(nums)-2,1):
                l=j+1
                r=len(nums)-1
                while l<r:
                    sum=nums[i]+nums[j]+nums[l]+nums[r]
                    if sum<target:
                        l=l+1
                    elif sum>target:
                        r=r-1
                    elif sum==target:
                        set2.add((nums[i],nums[j],nums[l],nums[r]))
                        l=l+1
                        r=r-1
        for i in set2:
            list1.append(list(i))
        return list1