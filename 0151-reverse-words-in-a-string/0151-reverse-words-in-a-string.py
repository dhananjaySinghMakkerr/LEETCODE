class Solution:
    def reverseWords(self, s: str) -> str:
        stt=s[::-1]
        print(stt)
        l=stt.split()
        print(l)
        strr=l[0][::-1]
        for x in l[1:]:
            strr+=" "+x[::-1]
        return strr