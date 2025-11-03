class Solution:
    def minCost(self, colors: str, neededTime: List[int]) -> int:
        l=[neededTime[0]]
        time=neededTime[0]
        final_time=0
        for i in range(1,len(colors),1):
            if colors[i]==colors[i-1]:
                l.append(neededTime[i])
                time=time+neededTime[i]
            else:
                final_time+=(time-max(l))
                time=neededTime[i]
                l=[neededTime[i]]
        final_time+=(time-max(l))
        return final_time