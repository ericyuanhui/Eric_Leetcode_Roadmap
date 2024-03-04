//
// Created by x00475975 on 2021/7/30.
//

#ifndef CODE_LEARNING_NEXT_GREATER_ELEMENT_H
#define CODE_LEARNING_NEXT_GREATER_ELEMENT_H

#include <vector>
#include <stack>
#include <iostream>
using namespace std;

class Solution {
public:
   vector<int> nextGreaterElements(vector<int> &nums)
   {
      int n = nums.size();
      vector<int> ans(n,-1);
      stack<int> stk;
      for(int i = 0; i < 2*n; i++)
      {
         while(!stk.empty() && nums[i%n]> nums[stk.top()])
         {
            ans[stk.top()] = nums[i%n];
            stk.pop();
         }
         if(i < n)
            stk.push(i);
      }
      return ans;
   }
};
#endif //CODE_LEARNING_NEXT_GREATER_ELEMENT_H
