class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        l=list()
        for row in bank:
            if list(row).count('1')!=0:
                l.append(list(row).count('1'))
        sum=0
        for i in range(0,len(l)-1,1):
            sum=sum+(l[i]*l[i+1])
        return sum