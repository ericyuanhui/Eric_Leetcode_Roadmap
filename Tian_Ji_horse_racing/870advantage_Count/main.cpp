#include <iostream>
#include "lib/870advantage_Count.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums1 = {2,7,11,15};
    vector<int> nums2 = {1,10,4,11};
    Solution slo;
    vector<int> result = slo.advantageCount(nums1, nums2);
    for (int res : result) {
        cout << res << endl;
    }
    return 0;
}
