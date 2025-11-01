class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        one=two=three=float('inf')
        for n in nums:
            if n<=one:
                one=n
            elif n<=two:
                two=n
            elif n<=three:
                three=n
        if three==float('inf'):
            return False
        elif one<two<three:
            return True
        else:
            return False