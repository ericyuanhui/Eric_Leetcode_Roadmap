//
// Created by Kitty on 2024/2/4.
//

#ifndef CLION_PROJECT_438FIND_ANAGRAMS_H
#define CLION_PROJECT_438FIND_ANAGRAMS_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int index = 0;
        int len = s.size();
        int sliding_size = p.size();
        vector<int> res;
        sort(p.begin(), p.end());
        while (index <= (len - sliding_size)) {
            string temp = s.substr(index, sliding_size);
            sort(temp.begin(), temp.end());
            if (temp == p) {
                res.push_back(index);
            }
            index++;
        }
        return res;
    }
};
#endif //CLION_PROJECT_438FIND_ANAGRAMS_H

