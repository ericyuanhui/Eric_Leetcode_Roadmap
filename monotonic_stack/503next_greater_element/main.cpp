#include <iostream>
#include "next_greater_element.h"

using namespace std;

int main() {
   vector<int> nums = {5,4,3,2,1};
   vector<int> new_array(5);
   Solution next_greater_elem;
   new_array = next_greater_elem.nextGreaterElements(nums);
   return 0;
}
