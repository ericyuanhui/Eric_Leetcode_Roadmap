#include <iostream>
#include "lib/167two_sumII.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> numbers = {2, 3, 4};
    int target = 6;
    vector<int> res;

    Solution slo;
    res = slo.twoSum(numbers, target);
    for (int i = 0; i < 2; i++) {
        cout << res[i] << endl;
    }
    return 0;
}

