//
// Created by Kitty on 2024/2/5.
//

#ifndef CLION_PROJECT_1208EQUAL_SUBSTRING_H
#define CLION_PROJECT_1208EQUAL_SUBSTRING_H
#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0;
        int right = 0;
        int len = s.size();
        int result = 0;
        int sum = 0;
        while (right < len) {
            sum += abs(s[right] - t[right]);
            right++;
            if (sum > maxCost) {
                sum -= abs(s[left] - t[left]);
                left++;
            }
            result = max(result, right - left);
        }
        return result;
    }
};
#endif //CLION_PROJECT_1208EQUAL_SUBSTRING_H

