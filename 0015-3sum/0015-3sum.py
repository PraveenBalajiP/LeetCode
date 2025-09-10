class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        t=set()
        list1=[]
        set1=()
        for i in range(0,len(nums)-2,1):
            l=i+1
            r=len(nums)-1
            while l<r:
                sum=nums[i]+nums[l]+nums[r]
                if sum<0:
                    l=l+1
                elif sum>0:
                    r=r-1
                elif sum==0:
                    t.add((nums[i],nums[l],nums[r]))
                    l=l+1
                    r=r-1
        for i in t:
            list1.append(list(i))
        return list1