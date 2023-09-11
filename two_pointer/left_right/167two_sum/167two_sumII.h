//
// Created by Kitty on 2023/9/11.
//

#ifndef CLION_PROJECT_167TWO_SUMII_H
#define CLION_PROJECT_167TWO_SUMII_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0;
        int index2 = numbers.size() - 1;
        vector<int> res;
        while (index1 < index2) {
            if (numbers[index1] + numbers[index2] == target) {
                break;
            } else if (numbers[index1] + numbers[index2] < target) {
                ++index1;
            } else {
                --index2;
            }
        }
        res.push_back(index1+1);
        res.push_back(index2+1);
        return res;
    }
};
#endif //CLION_PROJECT_167TWO_SUMII_H
