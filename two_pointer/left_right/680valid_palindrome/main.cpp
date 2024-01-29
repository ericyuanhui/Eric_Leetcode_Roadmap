#include <iostream>
#include "lib/680valid_palindrome.h"
using namespace std;

int main(int argc,char **argv)
{
    string s = "cupxpucu";
    Solution slo;
    bool res = slo.validPalindrome(s);
    cout << res << endl;
    return 0;
}

