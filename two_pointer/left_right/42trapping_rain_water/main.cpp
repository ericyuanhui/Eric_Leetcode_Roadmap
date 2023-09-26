#include <iostream>
#include "lib/42trapping_rain_water.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution slo;
    int res = slo.trap(height);
    cout << res << endl;
    return 0;
}

