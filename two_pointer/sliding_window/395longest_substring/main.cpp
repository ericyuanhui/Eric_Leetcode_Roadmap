#include <iostream>
#include "lib/395longest_substring.h"
using namespace std;

int main(int argc,char **argv)
{
    string s = "aaabb";
    int k = 3;
    Solution slo;
    int result = slo.longestSubstring(s, k);
    cout << result << endl;
    return 0;
}

