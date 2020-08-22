/*
 * 2020-08-22
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int, int> ht;

        for (int i=0; i<nums.size(); i++) {
            if (!ht.count(nums[i])) {
                ht.insert(make_pair(nums[i], 1));
            } else {
                return nums[i];
            }
        }

        return 0;
    }
};

int main()
{
    vector<int> nums = {2, 3, 1, 0, 2, 5, 3};
    Solution solu;
    cout << solu.findRepeatNumber(nums) << endl;

    return 0;
}