/*
 * 2020-09-24
 * f(n) = f(n-1) + f(n-2)
 */

#include <iostream>
using namespace std;

class Solution {
public:
    int numWays(int n) {
        if (n <= 0)
            return 1;
        else if (n == 1)
            return 1;
        else if (n == 2)
            return 2;

        long a, b, next;
        const long N = 1000000007;

        a = 1;
        b = 2;
        for (int i=3; i<=n; i++) {
            next = (a + b) % N;
            a = b;
            b = next;
        }

        return b;
    }
};

int main()
{
    Solution solu;
    int n = 5;
    cout << solu.numWays(n) << endl;

    return 0;
}
