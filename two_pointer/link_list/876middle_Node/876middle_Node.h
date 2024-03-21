//
// Created by Kitty on 2022/3/16.
//

#ifndef CLION_PROJECT_876MIDDLE_NODE_H
#define CLION_PROJECT_876MIDDLE_NODE_H

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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while ((fast != nullptr) && (fast->next != nullptr)) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};
#endif //CLION_PROJECT_876MIDDLE_NODE_H

