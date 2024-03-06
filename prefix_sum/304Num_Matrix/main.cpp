#include <iostream>
#include "lib/304Num_Matrix.h"
using namespace std;

int main(int argc,char **argv)
{
    vector<vector<int>> matrix = {
            {3,0,1,4,2},
            {5,6,3,2,1},
            {1,2,0,1,5},
            {4,1,0,1,7},
            {1,0,3,0,5}
            };
    NumMatrix *numMatrix = new NumMatrix(matrix);
    int result = numMatrix->sumRegion(2, 1, 4, 3);
    cout << result << endl;
    return 0;
}

