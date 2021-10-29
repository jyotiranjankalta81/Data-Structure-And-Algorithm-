// CPP program to implement Queue using
// two stacks with costly enQueue()

// enQueue Operation:
// push x to stack1.

// deQueue Operation:
// 1. if both the stack are empty then print error .
// 2. if stack 2 is empty 
//              while stack 1 is not empty, push everything from stack1 to stack2.
// 3. Pop the element from stack2 and return it.

// #include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<stack>
using namespace std;

class queue{
    stack<int> s1;
    stack<int>s2;

  public:
    void push(int x){
        s1.push(x);

    }
    int pop(){
        if (s1.empty() && s2.empty())
        {
            cout<<" Queue is empty"<<endl;
            return -1;
        }
        if (s2.empty())
        {
            // Move all elements from s1 to s2
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            
        }
        int topval=s2.top();
        s2.pop();
        return topval;
        
        
    }
    bool empty(){
        if (s1.empty() && s2.empty())
        {
            return true;
        }
        return false;
        
    }

};

// struct Queue {
// 	stack<int> s1, s2;

// 	void enQueue(int x)
// 	{
// 		// Move all elements from s1 to s2
// 		while (!s1.empty()) {
// 			s2.push(s1.top());
// 			s1.pop();
// 		}

// 		// Push item into s1
// 		s1.push(x);

// 		// Push everything back to s1
// 		while (!s2.empty()) {
// 			s1.push(s2.top());
// 			s2.pop();
// 		}
// 	}

// 	// Dequeue an item from the queue
// 	int deQueue()
// 	{
// 		// if first stack is empty
// 		if (s1.empty()) {
// 			cout << "Q is Empty";
// 			exit(0);
// 		}

// 		// Return top of s1
// 		int x = s1.top();
// 		s1.pop();
// 		return x;
// 	}
// };

// Driver code
int main()
{
	queue q;
	q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
	

	cout << q.pop() << '\n';
    cout << q.pop() << '\n';
    cout << q.pop() << '\n';
    cout << q.pop() << '\n';
	// cout << q.deQueue() << '\n';
	// cout << q.deQueue() << '\n';

	return 0;
}
