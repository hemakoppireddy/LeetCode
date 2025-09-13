class Solution:
    def maxFreqSum(self, s: str) -> int:
        vowels = set("aeiou")
        f = {}
        for ch in s:
            f[ch] = f.get(ch, 0) + 1
        maxV = 0
        for i in vowels:
            if i in f:
                maxV = max(maxV, f[i])
        maxC = 0
        for i in f:
            if i not in vowels:
                maxC = max(maxC, f[i])

        return maxV + maxC


