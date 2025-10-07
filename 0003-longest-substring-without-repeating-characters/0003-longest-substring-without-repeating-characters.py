class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max=0
        r=0
        l=0
        st=set()
        while r<len(s):
            while s[r] in st:
                st.remove(s[l])
                l=l+1
            st.add(s[r])
            r=r+1
            if r-l>max:
                max=(r-l)
        return max