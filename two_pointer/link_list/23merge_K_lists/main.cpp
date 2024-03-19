#include <iostream>
#include "lib/23merge_K_lists.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums1 = {4,1};
    vector<int> nums2 = {3,1};
    vector<int> nums3 = {2};
    vector<ListNode*> lists;
    ListNode *list1 = new ListNode(5);
    ListNode *list2 = new ListNode(4);
    ListNode *list3 = new ListNode(6);
    for (int i = 0; i < nums1.size(); i++) {
        list1 = new ListNode(nums1[i], list1);
    }
    lists.push_back(list1);
    for (int i = 0; i < nums2.size(); i++) {
        list2 = new ListNode(nums2[i], list2);
    }
    lists.push_back(list2);
    for (int i = 0; i < nums3.size(); i++) {
        list3 = new ListNode(nums3[i], list3);
    }
    lists.push_back(list3);
    Solution slo;
    ListNode *result = slo.mergeKLists(lists);
    while (result != nullptr) {
        cout << result->val << endl;
        result = result->next;
    }
    return 0;
}
