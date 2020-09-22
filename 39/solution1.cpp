/*
 * 2020-09-22
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int number;
        int count;

        number = nums[0];
        count = 1;
        for (int i=1; i<nums.size(); i++) {
            if (count == 0) {
                number = nums[i];
                count = 1;
            } else if (number == nums[i]) {
                count++;
            } else {
                count--;
            }
        }

        return number;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 2, 2, 2, 5, 4, 2};
    Solution solu;
    cout << solu.majorityElement(nums) << endl;
    return 0;
}