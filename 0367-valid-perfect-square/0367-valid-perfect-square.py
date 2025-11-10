class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if math.sqrt(num)==round(math.sqrt(num)):
            return True
        else:
            return False