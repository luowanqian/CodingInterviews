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
        string res;
        char* buffer = new char[s.size()*3 + 1];
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

        res = string(buffer);
        delete [] buffer;

        return res;
    }
};

int main()
{
    string s = "We are happy.";
    s = "     ";
    Solution solu;
    cout << solu.replaceSpace(s) << endl;

    return 0;
}