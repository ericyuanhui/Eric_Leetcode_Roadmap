#include <iostream>
#include "lib/567check_Inclusion.h"

using namespace std;
int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";
    Solution slo;
    bool res = slo.checkInclusion(s1, s2);
    cout << res << endl;
    return 0;
}
