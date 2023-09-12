#include <iostream>
#include "lib/18four_sum.h"
using namespace std;

int main(int argc,char **argv)
{
    //vector<int> numbers = {-1,2,1,-4};
    //int target = 1;
    vector<int> numbers = {1,0,-1,0,-2,2};
    //vector<int> numbers = {2,2,2,2,2};
    int target = 0;
    Solution slo;
    vector<vector<int>> res = slo.fourSum(numbers, target);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[0].size(); j++) {
            cout << res[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}

