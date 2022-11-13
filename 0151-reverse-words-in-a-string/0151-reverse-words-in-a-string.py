class Solution:
    def reverseWords(self, s: str) -> str:
        t=s[::-1]
        l=[x for x in t.split()]
        m=""
        for x in range(0,len(l)):
            m+=l[x][::-1]
            if x<len(l)-1:
                m+=" "
        return m