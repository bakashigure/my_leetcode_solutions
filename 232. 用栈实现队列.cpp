#if 0
#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> in;
    stack<int> out;
    void in2out()
    {
        if (out.empty())
        {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
    }

    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        in.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        in2out();
        int tmp = out.top();
        out.pop();
        return tmp;
    }

    /** Get the front element. */
    int peek() {
        in2out();
        return out.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        in2out();
        return out.empty();
    }
};


int main()
{
    MyQueue m = MyQueue();
    m.push(1);
    m.push(2);
    m.peek();
    m.pop();
    m.empty();
}
#endif