#include <iostream>
using namespace std;

#define n 20
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        // declare a empty arr
        arr = new int[n];
        // initialize front from -1
        front = -1;
        // initialize back from -1
        back = -1;
    }

    void push(int x)
    {
        // if back is equal to n-1 then there is no place for insert
        if (back == n - 1)
        {
            cout << " Queue Overflow" << endl;
            return;
        }
        // else increase the pointer of back with one
        back++;
        // insert the element x at arr position back
        arr[back] = x;

        // if i insert first element then increse front with one pointer
        if (front == -1)
        {
            front++;
        }
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << " NO elements in queue" << endl;
            return;
        }

        front++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << " NO elements in queue" << endl;
            return -1;
        }

        // front++;
        return arr[front];
    }
    bool empty()
    {
        if (front == -1 || front > back)
        {
            // cout<<" NO elements in queue"<<endl;
            return true;
        }
        return false;
    }
};

int main()
{

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.empty() << endl;

    return 0;
}