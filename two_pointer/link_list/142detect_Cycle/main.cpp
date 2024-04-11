#include <iostream>
#include "lib/142detect_Cycle.h"
using namespace std;

int main(int argc,char **argv)
{
    ListNode *list1 = new ListNode(1);
    ListNode *list2 = new ListNode(2, list1);
    list1->next = list2;
    /*int k = 6;
    while (k > 0) {
        cout << list2->val << endl;
        list2 = list2->next;
        k--;
    }*/
    Solution slo;
    ListNode *res = slo.detectCycle(list2);
    cout << res->val << endl;
    return 0;
}
