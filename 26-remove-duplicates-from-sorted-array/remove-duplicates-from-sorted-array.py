class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ans = []
        visited = set()
        for i in nums:
            if i not in visited:
                ans.append(i)
                visited.add(i)
        nums[:] = ans
        return len(ans)