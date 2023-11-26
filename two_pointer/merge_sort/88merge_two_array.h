#ifndef CLION_PROJECT_88MERGE_TWO_ARRAY_H
#define CLION_PROJECT_88MERGE_TWO_ARRAY_H
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pos = m + n - 1;
        int i = m - 1;
        int j = n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[pos] = nums1[i];
                pos--;
                i--;
            } else {
                nums1[pos] = nums2[j];
                pos--;
                j--;
            }
        }
        while (j >= 0) {
            nums1[pos] = nums2[j];
            pos--;
            j--;
        }
    }
};
#endif //CLION_PROJECT_88MERGE_TWO_ARRAY_H
