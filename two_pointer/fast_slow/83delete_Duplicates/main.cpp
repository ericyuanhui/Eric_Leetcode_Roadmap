#include <iostream>
#include <vector>
#include "lib/83delete_Duplicates.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums1 = {3,2,1,1};
    ListNode *head = new ListNode(3);
    for (int i = 0; i < nums1.size(); i++) {
        head = new ListNode(nums1[i], head);
    }
    Solution slo;
    ListNode *result = slo.deleteDuplicates(head);
    while (head != nullptr) {
        cout << head->val << endl;
        head = head->next;
    }
    return 0;
}
