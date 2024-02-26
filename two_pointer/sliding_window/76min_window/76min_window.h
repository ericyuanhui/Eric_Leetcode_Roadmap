//
// Created by Kitty on 2024/2/5.
//

#ifndef CLION_PROJECT_76MIN_WINDOW_H
#define CLION_PROJECT_76MIN_WINDOW_H
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int left = 0;
        int right = 0;
        int kind_cnt = 0;
        int cur_kind = 0;
        int len = s.size();
        int min_len = len + 1;
        unordered_map<char, int> hash_s, hash_t;
        string res = "";
        if (s.size() < t.size()) {
            return res;
        }
        if (s == t) {
            res = t;
            return res;
        }
        for (int i = 0; i < t.size(); i++) {
            hash_t[t[i]]++;
        }
        kind_cnt = hash_t.size();
        while (right < len) {
            hash_s[s[right]]++;
            if (hash_s[s[right]] == hash_t[s[right]]) {
                cur_kind++;
            }
            while (hash_s[s[left]] > hash_t[s[left]]) {
                hash_s[s[left]]--;
                left++;
            }
            if (cur_kind == kind_cnt) {
                if (right - left + 1 < min_len) {
                    min_len = right - left + 1;
                    res = s.substr(left, min_len);
                }
                hash_s[s[left]]--;
                left++;
                cur_kind--;
            }
            right++;
        }
        return res;
    }
};
#endif //CLION_PROJECT_76MIN_WINDOW_H

