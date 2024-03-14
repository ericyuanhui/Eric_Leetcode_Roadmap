#include <iostream>
#include "lib/1011shipWithinDays.h"

using namespace std;
int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    Solution slo;
    int res = slo.shipWithinDays(weights, days);
    cout << res << endl;
    return 0;
}
