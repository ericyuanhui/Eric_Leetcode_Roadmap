//
// Created by Eric on 2024/3/14.
//

#ifndef CLION_PROJECT_875MIN_EATING_SPEED_H
#define CLION_PROJECT_875MIN_EATING_SPEED_H
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 0;
        int mid = 0;
        for (int pile : piles) {
            right = max(right, pile);
        }
        while (left < right) {
            mid = (left + right) / 2;
            if (getTime(piles, mid) <= h) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    int getTime(vector<int>& piles, int k) {
        int time = 0;
        for (int pile : piles) {
            time += pile / k;
            if ((pile % k) != 0) {
                time++;
            }
        }
        return time;
    }
};
#endif //CLION_PROJECT_875MIN_EATING_SPEED_H

