class Solution:
    def myPow(self, x: float, n: int) -> float:
        p=1
        if n<0:
            n=-n
            while(n>0):
                if n%2==1:
                    p=p*x
                x=x*x
                n=n//2
            return 1/p
        elif n>0:
            while(n>0):
                if n%2==1:
                    p=p*x
                x=x*x
                n=n//2
            return p
        else:
            return 1