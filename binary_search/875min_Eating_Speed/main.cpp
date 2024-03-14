#include <iostream>
#include "lib/875min_Eating_Speed.h"

using namespace std;
int main() {
    vector<int> piles = {30,11,23,4,20};
    int h = 5;
    Solution slo;
    int res = slo.minEatingSpeed(piles, h);
    cout << res << endl;
    return 0;
}
