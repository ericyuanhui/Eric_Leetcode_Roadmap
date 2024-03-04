#include "nextGreaterElement.h"

int main() {
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};
    vector<int> ans(nums1.size());
    Solution next_elem;
    ans = next_elem.nextGreaterElement(nums1, nums2);
    next_elem.vector_output(ans);
    return 0;
}
