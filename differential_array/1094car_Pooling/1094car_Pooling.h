//
// Created by Kitty on 2024/3/10.
//

#ifndef CLION_PROJECT_1094CAR_POOLING_H
#define CLION_PROJECT_1094CAR_POOLING_H
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    Solution() {
        nums.resize(1001);
        diff.resize(1001);
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

    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> res(1001);
        int index = 0;
        for (int i = 0; i < trips.size(); i++) {
            increment(trips[i][index + 1], trips[i][index + 2] - 1, trips[i][index]);
        }
        res = getResultArray();
        for (int j = 0; j < res.size(); j++) {
            if (res[j] > capacity) {
                return false;
            }
        }
        return true;
    }

private:
    vector<int> nums;
    vector<int> diff;
};
#endif //CLION_PROJECT_1094CAR_POOLING_H

