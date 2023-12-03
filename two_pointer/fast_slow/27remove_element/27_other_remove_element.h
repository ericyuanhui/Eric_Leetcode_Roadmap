//
// Created by Kitty on 2023/12/3.
//

#ifndef CLION_PROJECT_27REMOVE_ELEMENT_H
#define CLION_PROJECT_27REMOVE_ELEMENT_H
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int fast, slow = 0;
        int len = nums.size();
        while (fast < len) {
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};
#endif //CLION_PROJECT_27REMOVE_ELEMENT_H

