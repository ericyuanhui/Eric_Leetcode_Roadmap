//
// Created by Kitty on 2024/3/11.
//

#ifndef CLION_PROJECT_704SEARCH_H
#define CLION_PROJECT_704SEARCH_H
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0;
        int right = len - 1;
        int mid = 0;
        sort(nums.begin(), nums.end());
        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            }
        }
        return -1;
    }
};
#endif //CLION_PROJECT_704SEARCH_H

