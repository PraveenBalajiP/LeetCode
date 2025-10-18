class Solution:
    def intToRoman(self, num: int) -> str:
        val=[1000,900,500,400,100,90,50,40,10,9,5,4,1]
        sym = ["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"]
        st=""
        for i in range(0,len(val),1):
            while num>=val[i]:
                st=st+sym[i]
                num=num-val[i]
        return st
                