//
// Created by Kitty on 2021/8/1.
//

#ifndef CLION_PROJECT_DAILY_TEMPERATURES_H
#define CLION_PROJECT_DAILY_TEMPERATURES_H

#include <vector>
#include <stack>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int len = temperatures.size();
        vector<int> res_vec(len, 0);
        stack<int> stk;
        for (int i = 0; i < len; i++) {
            while (!stk.empty() && (temperatures[i] > temperatures[stk.top()]) ) {
                res_vec[stk.top()] = (i) - stk.top();
                stk.pop();
            }
            stk.push(i);
        }
        return res_vec;
    }
    void vector_output(vector<int> &res)
    {
        vector<int>::iterator it;
        for(it=res.begin();it!=res.end();it++)
            cout << *it << endl;
    }
};
#endif //CLION_PROJECT_DAILY_TEMPERATURES_H
