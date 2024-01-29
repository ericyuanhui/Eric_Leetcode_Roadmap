#include <iostream>
#include "lib/524find_longest_word.h"
using namespace std;

int main(int argc,char **argv)
{
    string s = "abpcplea";
    vector<string> dictionary = {"ale","apple","monkey","plea"};
    Solution slo;
    string res = slo.findLongestWord(s, dictionary);
    cout << res << endl;
    return 0;
}

