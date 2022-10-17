class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        l=[0]*26
        for x in sentence:
            l[ord(x)-ord('a')]+=1
        for x in range(0,26):
            if l[x]==0:
                return False
        return True
            