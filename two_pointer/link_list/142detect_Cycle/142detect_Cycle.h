//
// Created by Kitty on 2023/11/27.
//

#ifndef CLION_PROJECT_142DETECT_CYCLE_H
#define CLION_PROJECT_142DETECT_CYCLE_H

#include <iostream>

using namespace std;
/**
 * Definition for singly-linked list.
 */
typedef struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
} ListNode;

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        bool is_cycle = false;
        while ((fast != nullptr) && (fast->next != nullptr)) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                is_cycle = true;
                break;
            }
        }
        if (is_cycle) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
        return nullptr;
    }
};
#endif //CLION_PROJECT_142DETECT_CYCLE_H

