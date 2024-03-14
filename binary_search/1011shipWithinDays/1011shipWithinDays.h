//
// Created by Eric on 2024/3/14.
//

#ifndef CLION_PROJECT_1011SHIPWITHINDAYS_H
#define CLION_PROJECT_1011SHIPWITHINDAYS_H
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = 0;
        int right = 0;
        for (int weight : weights) {
            left = max(left, weight);
            right += weight;
        }
        int mid = 0;
        while (left < right) {
            mid = (left + right) / 2;
            if (getTime(weights, mid) <= days) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    int getTime(vector<int>& weights, int x) {
        int days = 0;
        for (int i = 0; i < weights.size();) {
            int cap = x;
            while (i < weights.size()) {
                if (cap < weights[i]) {
                    break;
                } else {
                    cap -= weights[i];
                }
                i++;
            }
            days++;
        }
        return days;
    }
};
#endif //CLION_PROJECT_1011SHIPWITHINDAYS_H

