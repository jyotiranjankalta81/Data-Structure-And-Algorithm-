#include <iostream>
using namespace std;
#include <stack>
#include <math.h>

int prefixEvaluation(string s)
{
    // make a stack to store operand
    stack<int> st;
    // make loop for traverse the string
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            // define operend one and popout op1
            int op1 = st.top();
            st.pop();
            // define operend 2 and popout op2
            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;

            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    cout << prefixEvaluation("-+7*45+20");
    return 0;
}