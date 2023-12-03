#include <iostream>
#include <vector>
#include "lib/27remove_element.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    Solution slo;
    int cnt = slo.removeElement(nums, val);
    cout << "cnt is: " << cnt << endl;
    for (int i = 0; i < cnt; i++) {
        cout << nums[i] << endl;
    }
    return 0;
}

