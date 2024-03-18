#include <iostream>
#include <vector>
#include "lib/21merge_two_list.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums1 = {2,1};
    vector<int> nums2 = {3,1};
    ListNode *list1 = new ListNode(4);
    ListNode *list2 = new ListNode(4);
    for (int i = 0; i < nums1.size(); i++) {
        list1 = new ListNode(nums1[i], list1);
    }
    for (int i = 0; i < nums2.size(); i++) {
        list2 = new ListNode(nums2[i], list2);
    }
    Solution slo;
    ListNode *result = slo.mergeTwoLists(list1, list2);
    while (result != nullptr) {
        cout << result->val << endl;
        result = result->next;
    }
    return 0;
}
