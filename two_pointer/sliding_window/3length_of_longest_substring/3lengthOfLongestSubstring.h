//
// Created by xuyuanhui on 2024/2/5.
//

#ifndef CLION_PROJECT_3LENGTHOFLONGESTSUBSTRING_H
#define CLION_PROJECT_3LENGTHOFLONGESTSUBSTRING_H
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int len = s.size();
        int cnt = 0;
        int max_cnt = 0;
        unordered_map<char, int> hash_cnt;
        if (s.empty()) {
            return max_cnt;
        } else if (s.length() == 1) {
            max_cnt = 1;
            return max_cnt;
        }
        while (right < len) {
            hash_cnt[s[right]]++;
            cnt++;
            while (hash_cnt[s[right]] > 1) {
                hash_cnt[s[left]]--;
                left++;
                cnt--;
            }
            max_cnt = max(max_cnt, cnt);
            right++;
        }
        return max_cnt;
    }
};
#endif //CLION_PROJECT_3LENGTHOFLONGESTSUBSTRING_H
