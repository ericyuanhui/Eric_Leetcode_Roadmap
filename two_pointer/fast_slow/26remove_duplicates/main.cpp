#include <iostream>
#include <vector>
#include "lib/26remove_duplicates.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    Solution slo;
    int len = slo.removeDuplicates(nums);
    cout << len << endl;
    return 0;
}

