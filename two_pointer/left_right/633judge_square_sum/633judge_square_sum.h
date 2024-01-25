//
// Created by Kitty on 2024/1/25.
//

#ifndef CLION_PROJECT_633JUDGE_SQUARE_SUM_H
#define CLION_PROJECT_633JUDGE_SQUARE_SUM_H

#include <iostream>
#include <math.h>

using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        long left = 0;
        long right = (int)sqrt(c);
        long temp_res = 0;
        while (left <= right) {
            temp_res = (left * left + right * right);
            if (temp_res == c) {
                return true;
            } else if (temp_res > c) {
                right--;
            } else {
                left++;
            }
        }
        return false;
    }
};
#endif //CLION_PROJECT_633JUDGE_SQUARE_SUM_H

