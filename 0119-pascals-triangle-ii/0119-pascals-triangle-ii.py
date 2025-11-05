class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        if rowIndex==0:
            return [1]
        elif rowIndex==1:
            return [1,1]
        else:
            l=[[1],[1,1]]
            l1=[]
            l2=[1]
            for i in range(0,rowIndex-1,1):
                    l1=l[-1]
                    for j in range(0,len(l1)-1,1):
                        l2.append(l1[j]+l1[j+1])
                    l2.append(1)
                    l.append(l2)
                    l2=[1]
        return l[rowIndex]