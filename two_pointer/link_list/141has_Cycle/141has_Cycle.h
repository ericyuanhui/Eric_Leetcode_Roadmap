//
// Created by Kitty on 2022/3/15.
//

#ifndef CLION_PROJECT_141HAS_CYCLE_H
#define CLION_PROJECT_141HAS_CYCLE_H

#include <iostream>
using namespace std;

typedef struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
} ListNode;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while ((fast != nullptr) && (fast->next != nullptr)) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};

#endif //CLION_PROJECT_141HAS_CYCLE_H

