#include <iostream>
#include <vector>
#include "lib/142detect_first_cycle.h"
using namespace std;

/**
 * cycle list 3->2->0->-4
 *               |______|
 * cycle in node value 2
 */
int main(int argc,char **argv)
{
    vector<int> val_array = {2,0,-4};
    int len = val_array.size();
    ListNode *head = new ListNode(3);
    ListNode *temp = head;
    for (int i = 0; i < len; i++) {
        ListNode *node = new ListNode(val_array[i]);
        temp->next = node;
        temp = temp->next;
        if (i == 2) {
            node->next = head->next;
        }
    }
    Solution slo;
    ListNode *res_list = slo.detectCycle(head);
    cout << res_list->val << endl;
    return 0;
}

