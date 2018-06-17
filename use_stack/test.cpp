#include <iostream>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        int i = 0;
        while(s[i] != '\0')
        {
            cout<<i<<" "<<s[i]<<endl;
        ++i;
        }
        cout<<s<<endl;
    }
    return 0;
}
