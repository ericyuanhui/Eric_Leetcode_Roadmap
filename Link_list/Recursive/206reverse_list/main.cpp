#include <iostream>
#include <vector>
#include "lib/206reverse_list.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums1 = {4,3,2,1};
    ListNode *list1 = new ListNode(5);

    for (int i = 0; i < nums1.size(); i++) {
        list1 = new ListNode(nums1[i], list1);
    }
    Solution slo;
    ListNode *res = slo.reverseList(list1);
    while (res != nullptr) {
        cout << res->val << endl;
        res = res->next;
    }
    return 0;
}
