#include <iostream>
#include "lib/1208equal_substring.h"
using namespace std;

int main(int argc,char **argv)
{
    string s = "abcd";
    string t = "bcdf";
    int maxCost = 3;
    Solution slo;
    int result = slo.equalSubstring(s, t, maxCost);
    cout << result << endl;
    return 0;
}

