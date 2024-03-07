//
// Created by Kitty on 2024/3/7.
//

#ifndef CLION_PROJECT_560SUBARRAY_SUM_H
#define CLION_PROJECT_560SUBARRAY_SUM_H
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int pre_sum = 0;
        int res = 0;
        unordered_map<int, int> pre_map;
        pre_map[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            pre_sum += nums[i];
            if (pre_map.find(pre_sum - k) != pre_map.end()) {
                res += pre_map[pre_sum - k];
            }
            pre_map[pre_sum]++;
        }
        return res;
    }
};
#endif //CLION_PROJECT_560SUBARRAY_SUM_H

