class Solution:
    def addDigits(self, num: int) -> int:
        sum=0
        while True:
            while num>0:
                sum=sum+num%10
                num=num//10
            if sum<10:
                return sum
            else:
                num,sum=sum,0