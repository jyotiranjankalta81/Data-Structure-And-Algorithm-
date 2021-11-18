// Reverse a sentence using stack
// let the sentence is:----> Hey,how are you doing?
// then the sentence is:-->doing? you are how Hey,

#include <iostream>
#include <stack>
using namespace std;

void reverseSentence(string s)
{
    // define a string stack
    stack<string> st;
    // traverse the entire string
    for (int i = 0; i < s.length(); i++)
    {
        // here we store every word after breake e.g Hey
        string word = "";
        // traverse the string till not geeting space and i must be less than length
        while (s[i] != ' ' && i < s.length())
        {
            // now we get a word
            word += s[i];
            // and increment i
            i++;
        }
        // single word push into the stack
        st.push(word);
    }
    // now run the stack till stack geeting empty
    while (!st.empty())
    {
        // now print the stack
        cout << st.top() << " ";
        // now remove the top element from the stack
        st.pop();
    }
    cout << endl;
}
int main()
{

    // stack<int> st;
    string s = " Hey , how are you doing?";
    reverseSentence(s);

    return 0;
}