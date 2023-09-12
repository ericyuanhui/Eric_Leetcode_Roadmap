#include <iostream>
#include "lib/16three_sum_closest.h"
using namespace std;

int main(int argc,char **argv)
{
    //vector<int> numbers = {-1,2,1,-4};
    //int target = 1;
    vector<int> numbers = {1,1,1,0};
    int target = -100;
    Solution slo;
    int res = slo.threeSumClosest(numbers, target);
    cout << res <<endl;
    return 0;
}

