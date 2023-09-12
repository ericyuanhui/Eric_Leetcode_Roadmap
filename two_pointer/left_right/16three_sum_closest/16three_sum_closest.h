//
// Created by Kitty on 2023/9/12.
//

#ifndef CLION_PROJECT_16THREE_SUM_CLOSEST_H
#define CLION_PROJECT_16THREE_SUM_CLOSEST_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        int res;
        int min_res = INT_MAX;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i++) {
            int left = i + 1;
            int right = len - 1;
            while (left < right) {
                if (min_res > abs(nums[i] + nums[left] + nums[right] - target)) {
                    res = nums[i] + nums[left] + nums[right];
                    min_res = abs(res - target);
                }
                if ((nums[i] + nums[left] + nums[right]) > target) {
                    right--;
                } else if ((nums[i] + nums[left] + nums[right]) < target) {
                    left++;
                } else {
                    break;
                }
            }
        }
        return res;
    }
};
#endif //CLION_PROJECT_16THREE_SUM_CLOSEST_H

