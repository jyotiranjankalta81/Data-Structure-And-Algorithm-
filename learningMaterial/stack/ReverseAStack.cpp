#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &st, int ele)
{

    if (st.empty())
    {
        st.push(ele);
        return;
    }

    // remove top element from the stack
    int topele = st.top();
    st.pop();
    // remove all element one by one from the stack using recursion
    insertAtBottom(st, ele);

    st.push(topele);
}

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, ele);
}
int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    reverse(st);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
