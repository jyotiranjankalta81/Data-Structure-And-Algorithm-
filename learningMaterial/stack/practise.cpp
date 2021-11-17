// remove the all adjacent duplicates
// abbaca----->ca
class Solution {
public:
    string removeDuplicates(string S) {
        // create a empty stack
        stack<char> st;
        st.push(S[0]);
        // use for loop for traversing the string
        for(int i=1;i<S.size();i++)
        {
            // check the stack is notempty & top of the stack ch same to current ch or not
            if(!st.empty()&&st.top()==S[i])
            {
                // if true then remove the char
                st.pop();
            }
            else
            {
                // otherwise add char
                st.push(S[i]);
            }
        }
        // create a empty string to store the string
        string temp="";
        while(!st.empty())
        {
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};