/*
 * 2020-09-15
 */

#include <stack>
#include <iostream>
using namespace std;

class CQueue {
private:
    stack<int> st1;
    stack<int> st2;
public:
    CQueue() {

    }

    void appendTail(int value) {
        st1.push(value);
    }

    int deleteHead() {
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        if (st2.empty())
            return -1;
        int top = st2.top();
        st2.pop();
        return top;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */

int main()
{
    CQueue queue;
    return 0;
}