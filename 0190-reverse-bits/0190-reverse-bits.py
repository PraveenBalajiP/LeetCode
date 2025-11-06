class Solution:
    def reverseBits(self, n: int) -> int:
        s=""
        while n>0:
            s=s+str(n%2)
            n=n//2
        if len(s)!=32:
            s=s+"0"*(32-len(s))
        j=0
        sum=0
        for i in range(len(s)-1,-1,-1):
            sum=sum+((2**j)*int(s[i]))
            j=j+1
        return sum