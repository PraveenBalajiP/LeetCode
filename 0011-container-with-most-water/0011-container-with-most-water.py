class Solution:
    def maxArea(self, height: List[int]) -> int:
        i=0;j=len(height)-1;m=0
        while i<j:
            area=(j-i)*min(height[i],height[j])
            if area>m:
                m=area
            if height[i]<height[j]:
                i=i+1
            else:
                j=j-1
        return m