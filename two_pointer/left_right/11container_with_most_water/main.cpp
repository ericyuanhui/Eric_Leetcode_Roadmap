#include <iostream>
#include "lib/11container_with_most_water.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> numbers = {1,8,6,2,5,4,8,3,7};
    Solution slo;
    int res = slo.maxArea(numbers);
    cout << res << endl;
    return 0;
}

