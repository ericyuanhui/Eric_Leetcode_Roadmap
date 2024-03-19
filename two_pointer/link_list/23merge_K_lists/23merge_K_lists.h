//
// Created by Kitty on 2024/3/19.
//

#ifndef CLION_PROJECT_23MERGE_K_LISTS_H
#define CLION_PROJECT_23MERGE_K_LISTS_H
#include <iostream>
#include <queue>
#include <vector>
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
    struct Status {
        int val;
        ListNode *ptr;
        bool operator < (const Status &rhs) const {
            return val > rhs.val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head = new ListNode();
        ListNode *root = head;
        priority_queue <Status> q;
        for (auto node: lists) {
            if (node) q.push({node->val, node});
        }

        while (!q.empty()) {
            auto f = q.top();
            q.pop();
            root->next = f.ptr;
            root = root->next;
            if (f.ptr->next) {
                q.push({f.ptr->next->val, f.ptr->next});
            }
        }
        return head->next;
    }
};
#endif //CLION_PROJECT_23MERGE_K_LISTS_H

