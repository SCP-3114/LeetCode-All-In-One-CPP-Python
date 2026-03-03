class Solution:
    def climbStairs(self, n: int) -> int:
        @cache  # 缓存装饰器，避免重复计算 dfs 的结果
        def dfs(i: int) -> int:
            if i <= 1:  # 递归边界
                return 1
            return dfs(i - 1) + dfs(i - 2)
        return dfs(n)
