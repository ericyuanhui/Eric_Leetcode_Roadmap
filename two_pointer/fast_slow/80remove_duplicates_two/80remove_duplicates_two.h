//
// Created by Kitty on 2024/1/9.
//

#ifndef CLION_PROJECT_80REMOVE_DUPLICATES_TWO_H
#define CLION_PROJECT_80REMOVE_DUPLICATES_TWO_H
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 2, fast = 2;
        int len = nums.size();
        if (len <= 2) {
            return len;
        }
        while (fast < len) {
            if (nums[slow - 2] != nums[fast]) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};
#endif //CLION_PROJECT_80REMOVE_DUPLICATES_TWO_H

