#include <iostream>
#include "lib/1094car_Pooling.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<vector<int>> trips = {
            {2,1,5},
            {3,5,7}
    };
    int capacity = 3;
    Solution slo;
    bool result = slo.carPooling(trips, capacity);
    cout << result << endl;
    return 0;
}
