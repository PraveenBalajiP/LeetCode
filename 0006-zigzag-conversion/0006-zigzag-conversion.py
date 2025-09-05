class Solution:
    def convert(self, s: str, numRows: int) -> str:
        l=[]
        count=0
        for i in range(0,numRows,1):
            l.append([])
        while count<len(s):
            for i in range(0,numRows,1):
                if count>=len(s):
                    break
                l[i].append(s[count])
                count=count+1
            for i in range(numRows-2,0,-1):
                if count>=len(s):
                    break
                l[i].append(s[count])
                count=count+1
        st=""
        for i in l:
            for j in i:
                st=st+j
        return st