#include <iostream>
#include "lib/704search.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    Solution slo;
    int result = slo.search(nums, target);
    cout << result << endl;
    return 0;
}
