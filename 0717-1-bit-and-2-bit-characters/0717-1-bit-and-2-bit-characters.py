class Solution:
    def isOneBitCharacter(self, bits: List[int]) -> bool:
        bits.append(0)
        l=[]
        i=0
        while i<len(bits)-1:
            if bits[i]==1 and bits[i+1]==0:
                l.append(str(bits[i])+str(bits[i+1]))
                i=i+1
            elif bits[i]==1 and bits[i+1]==1:
                l.append(str(bits[i])+str(bits[i+1]))
                i=i+1
            else:
                l.append(str(bits[i]))
            i=i+1
        if len(l[-1])==1:
            return True
        else:
            return False