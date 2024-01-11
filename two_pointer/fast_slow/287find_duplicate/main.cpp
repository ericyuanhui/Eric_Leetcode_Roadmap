#include <iostream>
#include <vector>
#include "lib/287find_duplicate.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums = {3,1,3,4,2};
    Solution slo;
    int res = slo.findDuplicate(nums);
    cout << res << endl;
    return 0;
}

