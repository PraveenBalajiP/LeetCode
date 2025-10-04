class Solution:
    def isPalindrome(self, x: int) -> bool:
        num=0
        xx=x
        while x>0:
            d=x%10
            num=num*10+d
            x=x//10
        if xx==num:
            return True
        else:
            return False
