//
// Created by Kitty on 2021/8/3.
//

#ifndef CLION_PROJECT_NEXTGREATERELEMENT_H
#define CLION_PROJECT_NEXTGREATERELEMENT_H

#include <vector>
#include <stack>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int> res;
        stack<int> stk;
        map<int, int> vec_map;
        for (int i = 0; i < len2; i++) {
            while (!stk.empty() && (nums2[i] > nums2[stk.top()])) {
                vec_map.insert(pair<int, int> (nums2[stk.top()], nums2[i]));
                stk.pop();
            }
            stk.push(i);
        }
        while (!stk.empty()) {
            vec_map.insert(pair<int, int> (nums2[stk.top()], -1));
            stk.pop();
        }
        for (int j = 0; j < len1; j++) {
            res.push_back(vec_map[nums1[j]]);
        }
        return res;
    }
    void vector_output(vector<int> &res)
    {
        vector<int>::iterator it;
        for(it=res.begin();it!=res.end();it++)
            cout << *it << endl;
    }
};
#endif //CLION_PROJECT_NEXTGREATERELEMENT_H
