/*
 * 2020-09-22
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int number = nums[0];
        int count = 1;
        int n = nums.size() / 2 + 1;
        for (int i=1; i<nums.size(); i++) {
            if (count >= n) {
                break;
            } else if (number == nums[i]) {
                count++;
            } else {
                number = nums[i];
                count = 1;
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
