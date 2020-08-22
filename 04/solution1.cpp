/*
 * 2020-08-22
 */

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0 || matrix[0].size() == 0)
            return false;

        int row, col;

        row = 0;
        col = matrix[0].size() - 1;
        while (row < matrix.size() && col >= 0) {
            if (matrix[row][col] == target)
                return true;
            if (matrix[row][col] < target)
                row++;
            else
                col--;
        }

        return false;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1,   4,  7, 11, 15},
                                  {2,   5,  8, 12, 19},
                                  {3,   6,  9, 16, 22},
                                  {10, 13, 14, 17, 24},
                                  {18, 21, 23, 26, 30}};
//    vector<vector<int>> matrix = {{}};
    int target = 1;
    Solution solu;
    cout << solu.findNumberIn2DArray(matrix, target) << endl;

    return 0;
}