class Solution:
    def countPalindromicSubsequence(self, s: str) -> int:
        chars=set(s)
        s2=set()
        for i in chars:
            first=s.find(i)
            last=s.rfind(i)
            s1=set()
            for j in range(first+1,last,1):
                s1.add(s[j])
            for k in s1:
                s2.add(i+k+i)
        return (len(list(s2)))