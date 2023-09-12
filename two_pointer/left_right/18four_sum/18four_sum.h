//
// Created by Kitty on 2023/9/20.
//

#ifndef CLION_PROJECT_18FOUR_SUM_H
#define CLION_PROJECT_18FOUR_SUM_H
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0;
        int right = len - 1;
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i++) {
            if ((i > 0) && (nums[i] == nums[i-1])) {
                continue;
            }
            for (int j = i + 1; j < len; j++) {
                if ((j > i + 1) && (nums[j] == nums[j-1])) {
                    continue;
                }
                left = j + 1;
                right = len - 1;
                while (left < right) {
                    long sum = (long)nums[left] + nums[right] + nums[i] + nums[j];
                    if (sum == target) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while ((left < right) && (nums[left] == nums[left+1])) {
                            left++;
                        }
                        left++;
                        while ((left < right) && (nums[right] == nums[right-1])) {
                            right--;
                        }
                        right--;
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        return res;
    }
};
#endif //CLION_PROJECT_18FOUR_SUM_H

