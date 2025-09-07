class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        l=[[1],[1,1]]
        sum=0
        if numRows==0:
            return []
        elif numRows==1:
            return [[1]]
        else:
            for i in range(0,numRows-2,1):
                l1=[]
                l1.append(1)
                l2=l[-1]
                for j in range(0,len(l2)-1,1):
                    l1.append(l2[j]+l2[j+1])
                l1.append(1)
                l.append(l1)
            return l