#include "daily_temperatures.h"

int main() {
    vector<int> nums = {73,74,75,71,69,72,76,73};
    vector<int> ans(nums.size());
    Solution daily_elem;
    ans = daily_elem.dailyTemperatures(nums);
    daily_elem.vector_output(ans);
    return 0;
}
