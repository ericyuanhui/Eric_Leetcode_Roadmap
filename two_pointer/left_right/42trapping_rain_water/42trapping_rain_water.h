//
// Created by Kitty on 2023/9/26.
//

#ifndef CLION_PROJECT_42TRAPPING_RAIN_WATER_H
#define CLION_PROJECT_42TRAPPING_RAIN_WATER_H
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int left_max = 0;
        int right_max = 0;
        int res = 0;
        while (left < right) {
            left_max = max(height[left], left_max);
            right_max = max(height[right], right_max);
            if (height[left] <= height[right]) {
                res += left_max - height[left];
                left++;
            } else {
                res += right_max - height[right];
                right--;
            }
        }
        return res;
    }
};
#endif //CLION_PROJECT_42TRAPPING_RAIN_WATER_H

