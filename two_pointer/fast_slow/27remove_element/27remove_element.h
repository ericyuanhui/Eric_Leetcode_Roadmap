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
        int n = nums.size();
        int left = 0;
        for (int right = 0; right < n; right++) {
            if (nums[right] != val) {
                nums[left] = nums[right];
                left++;
            }
        }
        return left;
    }
};
#endif //CLION_PROJECT_27REMOVE_ELEMENT_H
