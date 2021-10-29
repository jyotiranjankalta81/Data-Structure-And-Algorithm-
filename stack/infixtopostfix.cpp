// (a-b/c)*(a/k-l)
// >  if operand print 
// >  if '(' push to stack
// >  if ')' pop from stack and print until '(' is found 
// >  if operator pop from stack and print until an operator with less precedence is found
// This is my code and it is returning the same infix expression! Please check what is wrong?

#include<iostream>
#include<stack>
using namespace std;
// create a function that gives the precedence
int prec(char c)
{
    if(c == '^')
        {return 3;}
    else if(c == '*' || c == '/')
       { return 2; } 
    else if(c == '+' || c == '-')
       { return 1; }
    else
       { return -1; } //returns when c = '('
}

string InfixToPostfix(string s)
{
    // create a blank stack
    stack<char> st;
    // create a string for store result
    string res;
    // now i have to itrate the string
    for(int i=0 ; i<s.length() ; i++)
    {
        // check current character s[i] operend or not
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >='A' || s[i] <= 'Z'))
           {
            res += s[i];
           }
        else if(s[i] == '(')
           {
            st.push(s[i]);
           }
        else if(s[i] == ')')
        {
            // wait till geting the closing bracket
            while(!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if(!st.empty())
                st.pop();
        }
        else{
            // first check the current stack empty or not then check precedence of top element greater than current element
            while(!st.empty() && prec(st.top()) >= prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}


int main()
{
    cout<<InfixToPostfix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}