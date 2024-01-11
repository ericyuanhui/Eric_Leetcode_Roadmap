//
// Created by Kitty on 2024/1/11.
//

#ifndef CLION_PROJECT_287FIND_DUPLICATE_H
#define CLION_PROJECT_287FIND_DUPLICATE_H
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0, fast = 1;
        int len = nums.size();
        while (slow < len) {
            if (fast == len) {
                slow++;
                fast = slow + 1;
            }
            if (nums[slow] == nums[fast]) {
                break;
            }
            fast++;
        }
        return nums[slow];
    }
};
#endif //CLION_PROJECT_287FIND_DUPLICATE_H

