#include <iostream>
using namespace std;
//对于每组测试数据，第-行是一个正整数  n;
//0<n<=10000(n=0结束)。
//而后的n行，每行的第一一个字符可能是'P'或者'O”或者'A';
//如果是'P’(push)，后面还会跟着一一个整数，表示把这个数据压入堆栈;
//如果是'O'(pop)，表示将栈顶的值pop出来，如果堆栈中没有元素时，忽略本次操作;
//如果是'A’(top),表示询问当前栈顶的值，如果当时栈为空，则输出'E’。堆栈开始为空。

#include <stack>
#include <string.h>

int main()
{
    int n;
    cin>>n;
    ++n;
    stack<int> _stack;
    string s;
    while(n--)
    {
        getline(cin,s);
        /* cout<<"s[0] : "<<s[0]<<endl; */
        if(s[0] == 'P') //push
        {
            s.erase(0,2);
            char str[32];
            strcpy(str,s.c_str());
            int val = atoi(str);
            _stack.push(val);
        }

        if(s[0] == 'O') //pop
        {
            if(!_stack.empty())
            {
                _stack.pop();
            }
        }

        if(s[0] == 'A') //top
        {
            if(_stack.empty())
            {
                cout<<"E"<<endl;
            }
            else
            {
                int ret = _stack.top();
                cout<<ret<<endl;
            }
        }
    }
    cout<<endl;
    return 0;
}
