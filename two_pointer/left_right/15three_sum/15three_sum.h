//
// Created by Kitty on 2023/9/11.
//

#ifndef CLION_PROJECT_15THREE_SUM_H
#define CLION_PROJECT_15THREE_SUM_H
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int index1, index2 = 0;
        int len = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i++) {
            if ((i > 0) && (nums[i] == nums[i-1])) {
                continue;
            }
            int target = -nums[i];
            index1 = i+1;
            index2 = len-1;
            while (index1 < index2) {
                int sum = nums[index1] + nums[index2];
                if (sum == target) {
                    res.push_back(vector<int>{nums[i], nums[index1], nums[index2]});
                    index1++;
                    index2--;
                    while ((index1 < index2) && (nums[index1] == nums[index1-1])) {
                        index1++;
                    }
                    while ((index1 < index2) && (nums[index2] == nums[index2+1])) {
                        index2--;
                    }
                } else if (sum < target) {
                    index1++;
                } else {
                    index2--;
                }
            }
        }
        return res;
    }
};
#endif //CLION_PROJECT_15THREE_SUM_H

