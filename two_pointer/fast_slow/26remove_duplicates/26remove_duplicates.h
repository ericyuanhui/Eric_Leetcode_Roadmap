//
// Created by Kitty on 2024/1/9.
//

#ifndef CLION_PROJECT_26REMOVE_DUPLICATES_H
#define CLION_PROJECT_26REMOVE_DUPLICATES_H
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 1, fast = 1;
        int len = nums.size();
        while (fast < len) {
            if (nums[fast] != nums[fast - 1]) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};
#endif //CLION_PROJECT_26REMOVE_DUPLICATES_H

