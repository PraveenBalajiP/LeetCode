class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        merged=nums1+nums2
        merged.sort()
        if len(merged)%2!=0:
            n=len(merged)//2
            median=float(merged[n])
        elif len(merged)%2==0:
            n1=len(merged)//2
            n2=n1+1
            median=((merged[n1-1])+(merged[n2-1]))/2
        return median