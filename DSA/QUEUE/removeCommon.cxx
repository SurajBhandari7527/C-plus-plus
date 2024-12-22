#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
class solution
{
    public:
    string Result(string str1, string str2)
    {
        stack<char> result;
        for (char x : str2)
        {
            for (char y : str1)
            {
                if (x != y)
                {
                    result.push(y);
                }
            }
            str1="";
            while (not result.empty())
            {
                str1 += string(1, result.top());
                result.pop();
            }
            reverse(str1.begin(), str1.end());
        }
        return str1;
    }
};
int main()
{
    solution s1;
    cout<<s1.Result("uchiha obito","Rin nohara");
    return 0;
}