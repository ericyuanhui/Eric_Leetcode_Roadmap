//
// Created by Kitty on 2024/1/8.
//

#ifndef CLION_PROJECT_283MOVE_ZEROS_H
#define CLION_PROJECT_283MOVE_ZEROS_H

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        int len = nums.size();
        while (fast < len) {
            if (nums[fast] != 0) {
                int temp = nums[fast];
                nums[fast] = nums[slow];
                nums[slow] = temp;
                slow++;
            }
            fast++;
        }
    }
};
#endif //CLION_PROJECT_283MOVE_ZEROS_H

