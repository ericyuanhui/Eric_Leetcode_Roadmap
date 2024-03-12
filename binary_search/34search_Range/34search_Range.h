//
// Created by Eric on 2024/3/12.
//

#ifndef CLION_PROJECT_34SEARCH_RANGE_H
#define CLION_PROJECT_34SEARCH_RANGE_H
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int left = 0;
        int right = 0;
        left = leftBound(nums, target);
        right = rightBound(nums, target);
        res.push_back(left);
        res.push_back(right);
        return res;
    }

    int leftBound(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        int mid = 0;
        while (left < right) {
            mid = (left + right) / 2;
            if (nums[mid] == target) {
                right = mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid;
            }
        }
        if (left == nums.size()) {
            return -1;
        }
        return nums[left] == target ? left : -1;
    }
    int rightBound(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        int mid = 0;
        while (left < right) {
            mid = (left + right) / 2;
            if (nums[mid] == target) {
                left = mid + 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid;
            }
        }
        if (left == 0) {
            return -1;
        }
        return nums[left - 1] == target ? left - 1 : -1;
    }
};

/*class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int left = 0;
        int right = 0;
        left = leftBound(nums, target);
        right = rightBound(nums, target);
        res.push_back(left);
        res.push_back(right);
        return res;
    }
    int leftBound(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;
        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] == target) {
                right = mid - 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            }
        }
        if (left >= nums.size() || nums[left] != target) {
            return -1;
        }
        return left;
    }
    int rightBound(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;
        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] == target)
                left = mid + 1;
            else if (nums[mid] < target)
                left = mid + 1;
            else if (nums[mid] > target)
                right = mid - 1;
        }
        if (right < 0 || nums[right] != target) {
            return -1;
        }
        return right;
    }
};*/
#endif //CLION_PROJECT_34SEARCH_RANGE_H

