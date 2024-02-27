//
// Created by Kitty on 2024/2/27.
//

#ifndef CLION_PROJECT_395LONGEST_SUBSTRING_H
#define CLION_PROJECT_395LONGEST_SUBSTRING_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {
        int ret = 0;
        int n = s.length();
        for (int t = 1; t <= 26; t++) {
            int left = 0, right = 0;
            vector<int> cnt(26, 0);
            int total_kind = 0;
            int counter = 0;
            while (right < n) {
                cnt[s[right] - 'a']++;
                if (cnt[s[right] - 'a'] == 1) {
                    total_kind++;
                    counter++;
                }
                if (cnt[s[right] - 'a'] == k) {
                    counter--;
                }

                while (total_kind > t) {
                    cnt[s[left] - 'a']--;
                    if (cnt[s[left] - 'a'] == k - 1) {
                        counter++;
                    }
                    if (cnt[s[left] - 'a'] == 0) {
                        total_kind--;
                        counter--;
                    }
                    left++;
                }
                if (counter == 0) {
                    ret = max(ret, right - left + 1);
                }
                right++;
            }
        }
        return ret;
    }
};
#endif //CLION_PROJECT_395LONGEST_SUBSTRING_H

