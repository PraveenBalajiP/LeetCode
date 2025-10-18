class Solution:
    def longestPalindrome(self, s: str) -> str:
        max=0
        for i in range(0,len(s),1):
            l,r=i,i
            while l>=0 and r<len(s) and s[l]==s[r]:
                if (r-l+1)>max:
                    max=(r-l+1)
                    t=s[l:r+1]
                l=l-1
                r=r+1
            l,r=i,i+1
            while l>=0 and r<len(s) and s[l]==s[r]:
                if (r-l+1)>max:
                    max=(r-l+1)
                    t=s[l:r+1]
                l=l-1
                r=r+1
        return t