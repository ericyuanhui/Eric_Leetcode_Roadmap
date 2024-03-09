//
// Created by Kitty on 2024/3/9.
//

#ifndef CLION_PROJECT_370GET_MODIFIED_ARRAY_H
#define CLION_PROJECT_370GET_MODIFIED_ARRAY_H
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    Solution(int length) {
        nums.resize(length);
        diff.resize(length);
        diff[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            diff[i] = nums[i] - nums[i - 1];
        }
    }

    void increment(int i, int j, int value) {
        diff[i] += value;
        if ((j + 1) < diff.size()) {
            diff[j + 1] -= value;
        }
    }

    vector<int> getResultArray() {
        vector<int> res(diff.size());
        res[0] = diff[0];
        for (int i = 1; i < diff.size(); i++) {
            res[i] = res[i - 1] + diff[i];
        }
        return res;
    }

    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
        vector<int> res(length);
        int index = 0;
        for (int i = 0; i < updates.size(); i++) {
            increment(updates[i][index], updates[i][index + 1], updates[i][index + 2]);
        }
        res = getResultArray();
        return res;
    }

private:
    vector<int> nums;
    vector<int> diff;
};

#endif //CLION_PROJECT_370GET_MODIFIED_ARRAY_H

