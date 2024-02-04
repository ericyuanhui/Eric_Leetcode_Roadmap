//
// Created by Kitty on 2024/2/4.
//

#ifndef CLION_PROJECT_438FIND_ANAGRAMS_H
#define CLION_PROJECT_438FIND_ANAGRAMS_H
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int left = 0;
        int right = 0;
        int len = s.size();
        int sliding_size = 0;
        vector<int> res;
        unordered_map<char, int> hashp, hashs;

        for (int i = 0; i < p.size(); i++) {
            hashp[p[i]]++;
        }
        while (right < len) {
            char c = s[right];
            hashs[c]++;
            sliding_size++;
            right++;
            while (hashs[c] > hashp[c]) {
                hashs[s[left]]--;
                left++;
                sliding_size--;
            }
            if (sliding_size == p.size()) {
                res.push_back(left);
            }
        }
        return res;
    }
};
#endif //CLION_PROJECT_438FIND_ANAGRAMS_H

