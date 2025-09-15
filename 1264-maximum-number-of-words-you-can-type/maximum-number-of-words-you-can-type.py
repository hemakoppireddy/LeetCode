class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        words = text.split()
        broke = set(brokenLetters)
        cnt = 0
        for i in words:
            flag = True
            for ch in i:
                if ch in broke:
                    flag = False
                    break
            if flag:
                cnt+=1
        return cnt