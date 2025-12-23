class Solution:
    def findDelayedArrivalTime(self, arrivalTime: int, delayedTime: int) -> int:
        sum=arrivalTime+delayedTime
        if sum==24:
            return 0
        elif sum<24:
            return sum
        else:
            return sum-24