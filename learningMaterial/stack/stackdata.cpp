#include <iostream>
using namespace std;
// define the arr size
#define n 100

class stack
{
    int *arr;
    int top;

public:
    // make a constructor for data structure
    stack()
    {
        // now allocate the memory to arr
        arr = new int[n];
        top = -1;
    }
    // first make push operation
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << " Stack overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }
    // here is the pop operation to remove top element
    void pop()
    {
        if (top == -1)
        {
            cout << " No element to pop" << endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << " No element in stack" << endl;
            return -1;
        }

        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};
int main()
{

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;
    // return

    return 0;
}