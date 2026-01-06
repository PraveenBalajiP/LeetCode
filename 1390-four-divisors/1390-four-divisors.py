class Solution:
    def sumFourDivisors(self, nums: List[int]) -> int:
        sum_4=0
        for i in nums:
            l=[]
            limit=int(math.sqrt(i))
            for j in range(1,limit+1,1):
                if i%j==0:
                    l.append(j)
                    if j!=i//j:
                        l.append(i//j) 
            print(l)
            if len(l)==4:
                sum_4=sum_4+sum(l)
        return sum_4