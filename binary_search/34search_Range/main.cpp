#include <iostream>
#include "lib/34search_Range.h"

using namespace std;
int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    Solution slo;
    vector<int> res = slo.searchRange(nums, target);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}
