#include <iostream>
#include "lib/560subarray_Sum.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums = {1,2,3};
    int k = 3;
    Solution slo;
    int result = slo.subarraySum(nums, k);
    cout << result << endl;
    return 0;
}

