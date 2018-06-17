#include <iostream>
using namespace std;
#include <stack>

class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int front = 0;
        while(!stack1.empty())
        {
            front = stack1.top();
            stack1.pop();
            stack2.push(front);
        }
        stack2.pop();
        int top = 0;
        while(!stack2.empty())
        {
            top = stack2.top();
            stack2.pop();
            stack1.push(top);
        }
        return front;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

int main()
{
    Solution s;
    int i = 0;
    cout<<"push ";
    for(i = 1; i <= 5; ++i)
    {
        s.push(i);
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"pop ";
    for(i = 1; i <= 5; ++i)
    {
        int ret = s.pop();
        cout<<ret<<" ";
    }
    cout<<endl;
    return 0;
}
