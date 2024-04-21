//
// Created by Kitty on 2022/3/16.
//

#ifndef CLION_PROJECT_206REVERSE_LIST_H
#define CLION_PROJECT_206REVERSE_LIST_H
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
     ListNode* reverseList(ListNode* head) {
        if (head == NULL) return head;
        ListNode* cur_node = head;
        ListNode* pre_node = nullptr;
        while (cur_node != nullptr) {
            ListNode* temp = cur_node->next;
            cur_node->next = pre_node;
            pre_node = cur_node;
            cur_node = temp;
        }
        return pre_node;
    }
};
#endif //CLION_PROJECT_206REVERSE_LIST_H

