//
// Created by Kitty on 2024/1/29.
//

#ifndef CLION_PROJECT_680VALID_PALINDROME_H
#define CLION_PROJECT_680VALID_PALINDROME_H
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool vaildPart(string s, int left, int right) {
        while (left <= right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left <= right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return vaildPart(s, left + 1, right) || vaildPart(s, left, right - 1);
            }
        }
        return true;
    }
};
#endif //CLION_PROJECT_680VALID_PALINDROME_H

