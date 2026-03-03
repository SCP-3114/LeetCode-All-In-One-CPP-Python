class Solution {
public:
    int mySqrt(int x) {
        // 处理特殊情况
        if (x == 0 || x == 1) {
            return x;
        }

        int left = 1;
        int right = x;
        int ans = 0;

        // 二分查找
        while (left <= right) {
            // 使用位运算防止 (left + right) 溢出
            int mid = left + ((right - left) >> 1);
            
            // 使用 long long 防止 mid * mid 溢出 int 范围
            long long square = (long long)mid * mid;

            if (square == x) {
                return mid;
            } else if (square < x) {
                left = mid + 1;
                ans = mid; // 记录下当前满足条件的值
            } else {
                right = mid - 1;
            }
        }
        
        return ans;
    }
};
