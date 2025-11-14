class Solution:
    def arrangeCoins(self, n: int) -> int:
        l=0
        u=n
        while l<=u:
            mid=(l+u)//2
            coins=(mid*(mid+1))//2
            if coins==n:
                return mid
            elif coins<n:
                l=mid+1
            else:
                u=mid-1
        return u