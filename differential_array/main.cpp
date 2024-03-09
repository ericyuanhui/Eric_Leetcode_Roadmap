#include <iostream>
#include "lib/370get_Modified_Array.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<vector<int>> updates = {
            {1,3,2},
            {2,4,3},
            {0,2,-2}
    };
    int length = 5;
    Solution slo(length);
    vector<int> result = slo.getModifiedArray(length, updates);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}
