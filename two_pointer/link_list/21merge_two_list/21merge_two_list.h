//
// Created by Kitty on 2022/3/15.
//

#ifndef CLION_PROJECT_21MERGE_TWO_LIST_H
#define CLION_PROJECT_21MERGE_TWO_LIST_H

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* root = head;
        while (list1 != nullptr || list2 != nullptr) {
            if (list1 == nullptr) {
                root->next = list2;
                return head->next;
            }
            if (list2 == nullptr) {
                root->next = list1;
                return head->next;
            }
            if (list1->val <= list2->val) {
                root->next = list1;
                list1 = list1->next;
            } else {
                root->next = list2;
                list2 = list2->next;
            }
            root = root->next;
        }
        return head->next;
    }
};
/*class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        if (list1->val <= list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
};*/
#endif //CLION_PROJECT_21MERGE_TWO_LIST_H

