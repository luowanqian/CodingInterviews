/*
 * 2020-09-23
 * f(n) = max(f(i)*f(n-i))
 * 1 < i < n
 */

#include <iostream>
using namespace std;

class Solution {
public:
    int cuttingRope(int n) {
        if (n < 2)
            return 0;
        else if (n == 2)
            return 1;
        else if (n == 3)
            return 2;

        int max, product;
        int* mem = new int[n + 1];

        mem[0] = 0;
        mem[1] = 1;
        mem[2] = 2;
        mem[3] = 3;

        for (int i=4; i<=n; i++) {
            max = 1;
            for (int j=1; j<=i/2; j++) {
                product = mem[j] * mem[i-j];
                if (product > max) {
                    max = product;
                }
            }
            mem[i] = max;
        }
        max = mem[n];
        delete [] mem;

        return max;
    }
};

int main()
{
    int n = 58;
    Solution solu;
    cout << solu.cuttingRope(n) << endl;
    return 0;
}