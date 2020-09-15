/*
 * 2020-09-15
 */

#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;

        long a, b, next;
        const long N = 1000000007;
        a = 0;
        b = 1;
        for (int i=2; i<=n; i++) {
            next = a + b;
            if (next >= N) {
                next = next % N;
                b = b % N;
            }
            a = b;
            b = next;
        }
        return next;
    }
};

int main()
{
    Solution solu;
    int n = 5;
    cout << solu.fib(n) << endl;

    return 0;
}