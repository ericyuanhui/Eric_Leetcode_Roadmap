#include <iostream>
#include "lib/1109corp_Flight_Bookings.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<vector<int>> bookings = {
            {1,2,10},
            {2,3,20},
            {2,5,25}
    };
    int length = 5;
    Solution slo;
    vector<int> result = slo.corpFlightBookings(bookings, length);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}
