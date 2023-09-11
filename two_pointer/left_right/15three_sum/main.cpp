#include <iostream>
#include "lib/15three_sum.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> numbers = {-1,0,1,2,-1,-4}; // -4,-1,-1,0,1,2
    vector<vector<int>> res;

    Solution slo;
    res = slo.threeSum(numbers);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << endl;
        }
    }
    return 0;
}

