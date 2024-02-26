#include <iostream>
#include "lib/76min_window.h"
using namespace std;

int main(int argc,char **argv)
{
    string s = "ADOBECODEBANC";
    string t = "ABC";
    Solution slo;
    string result = slo.minWindow(s, t);
    cout << result << endl;
    return 0;
}

