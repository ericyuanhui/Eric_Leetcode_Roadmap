//
// Created by Kitty on 2022/3/15.
//

#ifndef CLION_PROJECT_160GET_INTERSECTION_NODE_H
#define CLION_PROJECT_160GET_INTERSECTION_NODE_H
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if ((headA == nullptr) || (headB == nullptr)) {
            return nullptr;
        }
        ListNode* pA = headA;
        ListNode* pB = headB;
        while (pA != pB) {
            pA = pA == nullptr ? headB : pA->next;
            pB = pB == nullptr ? headA : pB->next;
        }
        return pA;
    }
};
#endif //CLION_PROJECT_160GET_INTERSECTION_NODE_H

