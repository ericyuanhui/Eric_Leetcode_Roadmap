#include <iostream>
#include "lib/88merge_two_array.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> num1 = {1,2,3,0,0,0};
    vector<int> num2 = {2,5,6};
    int m  = 3, n = 3;
    int len = m + n;
    Solution slo;
    slo.merge(num1, m, num2, n);
    for (int i = 0; i < len; i++) {
        cout << num1[i] << "," << endl;
    }
    return 0;
}
