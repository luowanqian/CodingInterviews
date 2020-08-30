/*
 * 2020-08-30
 */

#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        if (s.size() == 0)
            return s;

        int nws = 0;
        int nnws = 0;
        for (int i=0; i<s.size(); i++) {
            if (s[i] == ' ')
                nws++;
            else
                nnws++;
        }

        if (nws == 0)
            return s;

        char* buffer = new char[3*nws + nnws + 1];
        int n = 0;
        for (int i=0; i<s.size(); i++) {
            char ch = s[i];
            if (ch == ' ') {
                buffer[n++] = '%';
                buffer[n++] = '2';
                buffer[n++] = '0';
            } else {
                buffer[n++] = ch;
            }
        }
        buffer[n] = '\0';

        string res = string(buffer);
        delete [] buffer;

        return res;
    }
};

int main()
{
    string s = "We are happy.";
    Solution solu;
    cout << solu.replaceSpace(s) << endl;
    return 0;
}