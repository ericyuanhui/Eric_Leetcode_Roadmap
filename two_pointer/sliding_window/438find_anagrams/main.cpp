#include <iostream>
#include "lib/438find_anagrams.h"
using namespace std;

int main(int argc,char **argv)
{
    string s = "abab";
    string p = "ab";
    Solution slo;
    vector<int> res = slo.findAnagrams(s, p);
    for (int i = 0 ; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}

