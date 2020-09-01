/*
 * 2020-09-01
 */
#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double res;
        if (n == 0)
            return 1;

        if (n < 0)
            res = 1.0 / pow(x, -(long)n);
        else
            res = pow(x, n);

        return res;
    }

    double pow(double x, long n) {
        if (n == 1) {
            return x;
        } else {
            double res;
            if (n % 2 == 0) {
                res = myPow(x, n / 2);
                res *= res;
            } else {
                res = myPow(x, (n - 1) / 2);
                res *= res * x;
            }
            return res;
        }
    }
};

int main()
{
    double x = 1.0;
    int n = -2147483648;
    Solution solu;
    cout << solu.myPow(x, n) << endl;

    return 0;
}
