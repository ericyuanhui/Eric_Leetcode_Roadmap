//
// Created by Kitty on 2024/3/21.
//

#ifndef CLION_PROJECT_19REMOVE_NTH_FROM_END_H
#define CLION_PROJECT_19REMOVE_NTH_FROM_END_H
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr) {
            return nullptr;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *temp = new ListNode(0, head);
        ListNode *pre = temp;
        int k = n - 1;
        while (k > 0) {
            fast = fast->next;
            k--;
        }
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
            pre = pre->next;
        }
        pre->next = slow->next;
        return temp->next;
    }
};
#endif //CLION_PROJECT_19REMOVE_NTH_FROM_END_H

