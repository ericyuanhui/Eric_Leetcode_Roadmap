//
// Created by Eric on 2024/3/11.
//

#ifndef CLION_PROJECT_567CHECK_INCLUSION_H
#define CLION_PROJECT_567CHECK_INCLUSION_H
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left = 0;
        int right = 0;
        unordered_map<char, int> need, window;
        int vaild = 0;

        for (char c : s1) {
            need[c]++;
        }
        while (right < s2.size()) {
            char c = s2[right];
            right++;
            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c]) {
                    vaild++;
                }
            }
            while ((right - left) >= s1.size()) {
                if (vaild == need.size()) {
                    return true;
                }
                char d = s2[left];
                left++;
                if (need.count(d)) {
                    if (window[d] == need[d]) {
                        vaild--;
                    }
                    window[d]--;
                }
            }
        }
        return false;
    }
};
#endif //CLION_PROJECT_567CHECK_INCLUSION_H

