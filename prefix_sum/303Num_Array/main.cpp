#include <iostream>
#include "lib/303Num_Array.h"

using namespace std;
int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray *numArray = new NumArray(nums);
    int res = numArray->sumRange(0, 2);
    cout << res << endl;
    res = numArray->sumRange(2, 5);
    cout << res << endl;
    res = numArray->sumRange(0, 5);
    cout << res << endl;
    return 0;
}
