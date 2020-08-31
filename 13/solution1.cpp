/*
 * 2020-08-31
 */
#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

class Solution {
public:
    int count(int n) {
        int res = 0;
        while (n != 0) {
            res += n % 10;
            n = n / 10;
        }

        return res;
    }

    int movingCount(int m, int n, int k) {
        queue<pair<int, int>> q;
        int res;
        vector<vector<int>> visited(m, vector<int>(n, 0));
        vector<int> dx = {0, 1};
        vector<int> dy = {1, 0};

        res = 0;
        q.push(make_pair(0, 0));
        visited[0][0] = 1;
        while (!q.empty()) {
            auto point = q.front();
            int x = point.first;
            int y = point.second;
            res++;
            q.pop();
            for (int i=0; i<2; i++) {
                int new_x = x + dx[i];
                int new_y = y + dy[i];
                if ((new_x < m && new_y < n && visited[new_x][new_y] == 0) &&
                    (count(new_x) + count(new_y) <= k)) {
                    q.push(make_pair(new_x, new_y));
                    visited[new_x][new_y] = 1;
                }
            }
        }

        return res;
    }
};

int main()
{
    int m = 2;
    int n = 3;
    int k = 1;
    Solution solu;

    cout << solu.movingCount(m, n, k) << endl;
    return 0;
}