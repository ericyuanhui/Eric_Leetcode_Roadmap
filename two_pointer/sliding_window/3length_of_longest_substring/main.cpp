#include <iostream>
#include "lib/3lengthOfLongestSubstring.h"

using namespace std;

int main() {
    string s = "pwwkew";
    Solution slo;
    int max = slo.lengthOfLongestSubstring(s);
    cout << max << endl;
    return 0;
}

