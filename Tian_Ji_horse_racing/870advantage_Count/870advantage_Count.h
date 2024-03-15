//
// Created by Kitty on 2024/3/15.
//

#ifndef CLION_PROJECT_870ADVANTAGE_COUNT_H
#define CLION_PROJECT_870ADVANTAGE_COUNT_H
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int len = nums2.size();
        int left = 0;
        int right = len - 1;

        vector<int> res(len);
        vector<pair<int, int>> temp2(len);
        for(int i = 0; i < len; i++){
            temp2[i] = {nums2[i], i};
        }
        sort(nums1.begin(), nums1.end(), greater<int>());
        sort(temp2.begin(), temp2.end(), [](const auto& a, const auto& b){return a.first > b.first;});
        for (int i = 0; i < len; i++) {
            auto [cur, idx] = temp2[i];
            if (nums1[left] <= cur) {
                res[idx] = nums1[right];
                right--;
            } else {
                res[idx] = nums1[left];
                left++;
            }
        }
        return res;
    }
};
#endif //CLION_PROJECT_870ADVANTAGE_COUNT_H

