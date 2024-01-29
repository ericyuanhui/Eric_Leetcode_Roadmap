//
// Created by Kitty on 2024/1/29.
//

#ifndef CLION_PROJECT_524FIND_LONGEST_WORD_H
#define CLION_PROJECT_524FIND_LONGEST_WORD_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        int left = 0;
        int right = 0;
        int vec_len = dictionary.size();
        int str_len = s.size();
        int res_cnt = 0;
        string max_res = "";
        for (int i = 0; i < vec_len; i++) {
            left = 0;
            right = 0;
            while ((left < str_len) && (right < dictionary[i].size())) {
                if (s[left] == dictionary[i][right]) {
                    right++;
                }
                left++;
            }
            if (right == dictionary[i].size()) {
                if (res_cnt < right) {
                    res_cnt = right;
                    max_res = dictionary[i];
                } else if (res_cnt == right) {
                    if (max_res > dictionary[i]) {
                        max_res = dictionary[i];
                    }
                }
            }
        }
        return max_res;
    }
};
#endif //CLION_PROJECT_524FIND_LONGEST_WORD_H

