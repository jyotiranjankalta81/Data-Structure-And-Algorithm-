/* C++ Program to check whether valid
expression is redundant or not*/
#include <bits/stdc++.h>
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

// Function to check redundant brackets in a
// balanced expressio

	// Iterate through the given expression
		// if current character is close parenthesis ')'
			// If immediate pop have open parenthesis '('
			// duplicate brackets found
				// Check for operators in expression
				// Fetch top element of stack
			// If operators not found
			 // push open parenthesis '(',
				// operators and operands to stack
// Function to check redundant brackets
// Driver code
int main(){
    string s;
    cin>>s;
    // create a stack of characters
	stack<char> st;
    bool ans = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == "+" || s[i] == "-" || s[i] =="*" || s[i] == "/")
        {
            st.push(s[i]);
        }else if (s[i] == '(')
        {
            st.push(s[i]);
        }else if (s[i]==')')
        {
            if (st.top()=='(')
            {
                ans=true;
            }
            
            while (st.top()=='+' ||  st.top()=='-' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'])
            {
                st.pop();
            }
            st.pop();
            
        }
        
        
        
    }
    cout<<ans;
    
}
