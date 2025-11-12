class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip()
        s=s[::-1]
        if ' ' in s:
            index=s.index(' ')
            return index
        else:
            return len(s)