class Solution:
    def binary_check(self,num):
        s=""
        while num>0:
            s=str(num%2)+s
            num=num//2
        return s
    def smallestNumber(self, n: int) -> int:
        for i in range(n,10000,1):
            res=self.binary_check(i)
            if res.count("1")==len(res):
                return i
