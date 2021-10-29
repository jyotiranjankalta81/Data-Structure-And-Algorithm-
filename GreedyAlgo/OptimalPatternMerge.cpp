// Problem:you are given n files with their computetion times in an array.
// Operation:Choose/take any two files ,add their computation times and appened  
// it to the list of computation times.{Cost = Sum of Compuation time}
// Do this untill we are left with only one file in the array.We have to do this Operation
// such that we get minimum cost finally.
// Approach:
// (1) Push all the elements to a minheap.
// (2) Take top 2 elements one by one and add the cost to the answer.Push the
// merged file to the minheap
// (3) when single element remains,output the cost.


#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<algorithm>
#include<math.h>
#define int long long

signed main(){
    int n;
    cin>>n;
    vector<int>a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // in priority queue we take three things one data type second container third argument
    priority_queue<int,vector<int>,greater<int> > minheap;
    // push all the element in miniheap
    for (int i = 0; i <n; i++)
    {
        minheap.push(a[i]);
    }
    // make a ans variable to store ans
    int ans=0;
    // work till size of minheap greater than one because we 
    // pick top two elements add the sum in our element
    // & then push the latest sum in minheap.
    while (minheap.size()>1)
    {
        // first take top element
        int e1 = minheap.top();
        minheap.pop();
        int e2 = minheap.top();
        minheap.pop();

        // add the top two element
        ans += e1+e2;
        // push the sum in minheap
        minheap.push(e1+e2);
    }
    cout<<ans<<endl;
    
    

    return 0;
}