class Solution:
    def maxDepth(self, s: str) -> int:
        ans = 0
        count = 0
        for x in s:
            if(x == '('):
                count = count + 1
                ans = max(ans,count)
            elif(x == ')'):
                count = count-1
        return ans