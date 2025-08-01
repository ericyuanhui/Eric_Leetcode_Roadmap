//
// Created by Eric on 2025/8/1.
// 暴力解法
//

#ifndef CLION_PROJECT_DP_FIBONACCI_H
#define CLION_PROJECT_DP_FIBONACCI_H
class Solution {
public:
    int fib(int n) {
        int res = 0;
        if (n == 0) {
            return res;
        }
        if (n == 1) {
            res = 1;
            return res;
        }
        res = fib(n - 1) + fib(n - 2);
        return res;
    }
};
#endif //CLION_PROJECT_DP_FIBONACCI_H

