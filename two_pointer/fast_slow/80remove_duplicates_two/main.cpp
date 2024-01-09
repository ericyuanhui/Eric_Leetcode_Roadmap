#include <iostream>
#include <vector>
#include "lib/80remove_duplicates_two.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    Solution slo;
    int len = slo.removeDuplicates(nums);
    cout << len << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    return 0;
}

