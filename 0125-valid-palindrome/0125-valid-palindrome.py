class Solution:
    def isPalindrome(self, s: str) -> bool:
        str=""
        for i in s:
            if i.isalpha() or i.isdigit():
                str=str+i.lower()
        l=len(str)
        print(str)
        left=0
        right=l-1
        while(left<right):
            if str[left]!=str[right]:
                return False
            left=left+1
            right=right-1
        return True