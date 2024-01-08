#include <iostream>
#include <vector>
#include "lib/283move_zeros.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums = {0,1,0,3,12};
    Solution slo;
    slo.moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    return 0;
}

