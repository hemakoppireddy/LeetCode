class Solution:
    def processStr(self, s: str) -> str:
        ans=""
        for ch in s:
            if ch.isalpha():
                ans+=ch
            elif ch=='*':
                ans = ans[:-1]
            elif ch=='#':
                ans = ans+ans
            elif ch=='%':
                ans = ans[::-1]
        return ans

