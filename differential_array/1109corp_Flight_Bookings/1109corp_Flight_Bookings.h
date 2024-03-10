//
// Created by Kitty on 2024/3/10.
//

#ifndef CLION_PROJECT_1109CORP_FLIGHT_BOOKINGS_H
#define CLION_PROJECT_1109CORP_FLIGHT_BOOKINGS_H
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
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

    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        nums.resize(n);
        diff.resize(n);
        diff[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            diff[i] = nums[i] - nums[i - 1];
        }
        vector<int> res(n);
        int index = 0;
        for (int i = 0; i < bookings.size(); i++) {
            increment(bookings[i][index] - 1, bookings[i][index + 1] - 1, bookings[i][index + 2]);
        }
        res = getResultArray();
        return res;
    }

private:
    vector<int> nums;
    vector<int> diff;
};
#endif //CLION_PROJECT_1109CORP_FLIGHT_BOOKINGS_H

