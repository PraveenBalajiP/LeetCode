class Solution:
    def climbStairs(self, n: int) -> int:
        #Fibonacci Number Series Logic
        a=0
        b=1
        i=0
        while i<n:
            sum=a+b
            a=b
            b=sum
            i=i+1
        return sum