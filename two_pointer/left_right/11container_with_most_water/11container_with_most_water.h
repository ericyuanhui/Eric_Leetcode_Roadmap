//
// Created by Kitty on 2023/9/25.
//

#ifndef CLION_PROJECT_10CONTAINER_WITH_MOST_WATER_H
#define CLION_PROJECT_10CONTAINER_WITH_MOST_WATER_H
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int res = 0;
        while (left < right) {
            int area = min(height[left], height[right]) * (right - left);
            res = max(res, area);
            if (height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return res;
    }
};
#endif //CLION_PROJECT_10CONTAINER_WITH_MOST_WATER_H

