//
// Created by Eric on 2024/3/6.
//

#ifndef CLION_PROJECT_303NUM_ARRAY_H
#define CLION_PROJECT_303NUM_ARRAY_H
#include <iostream>
#include <vector>

using namespace std;

class NumArray {
public:
    NumArray(vector<int>& nums) {
        int n  = nums.size();
        pre_sum.resize(n + 1);
        pre_sum[0] = 0;
        for (int i = 1; i < (n + 1); i++) {
            pre_sum[i] = pre_sum[i - 1] + nums[i - 1];
        }
    }

    int sumRange(int left, int right) {
        int res = pre_sum[right + 1] - pre_sum[left];
        return res;
    }
private:
    vector<int> pre_sum;
};
/*class NumArray {
public:
    NumArray(vector<int>& nums) {
        out_array = nums;
    }

    int sumRange(int left, int right) {
        int res = 0;
        for (int i = left; i < (right + 1); i++) {
            res += out_array[i];
        }
        return res;
    }
private:
    vector<int> out_array;
};*/

#endif //CLION_PROJECT_303NUM_ARRAY_H

