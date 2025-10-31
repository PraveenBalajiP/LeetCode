class Solution:
    def exclude_zero(self,num):
        return num!=0
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product1=1
        product2=1
        final_list=list()
        nums_1=list(filter(self.exclude_zero,nums))
        if nums.count(0)==len(nums):
            return nums
        if nums.count(0)>1:
            final_list.extend([0]*len(nums))
            return final_list
        for i in nums:
            product1*=i
        for i in nums_1:
            product2*=i
        for i in nums:
            if i==0:
                final_list.append(product2)
            else:
                final_list.append(int(product1/i))
        return final_list
