#include <iostream>
#include <string>

using namespace std;

void permucation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);

        permucation(ros,ans+ch);
    }
}


// count the numer of Path for start to end point
// int countPath(int s, int e)
// {
//     if (s == e)
//     {
//         return 1;
//     }
//     if (s > e)
//     {
//         return 0;
//     }
//     int count = 0;
//     for (int i = 1; i <= 6; i++)
//     {
//         count += countPath(s + i, e);
//     }
//     return count;
// }


// Number of Possible Ways to reach in end in a Maze
// int countPathMaze(int n, int i, int j){
//     if (i==n-1 && j==n-1)
//     {
//         return 1;
//     }
//     if (i>=n || j>=n)
//     {
//         return 0;
//     }
//     return countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1);
// }

// int friendsPairing(int n){
//     if (n==0 || n==1 || n==2)
//     {
//         return n;
//     }
//     return friendsPairing(n-1)+friendsPairing(n-2)*(n-1);
// }
// 0-1 Knapsack Problem
// Put n items with giveen weight and value in a knapsack of capacity W to get the maximum total value in the knapsack
// int knapsack(int value[], int wt[], int n, int W)
// {
//     if (n==0 || W==0)
//     {
//         return 0;
//     }
//     if (wt[n-1]>W)
//     {
//         return knapsack(value, wt, n - 1, W);
//     }
//     return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
// }
int main()
{
    permucation("ABC", "");
    // cout << countPath(0, 3) << endl;
    // cout<<countPathMaze(3,0,0)<<endl;
    // cout << friendsPairing(4) << endl;
    // int wt[]={10,20,30};
    // int value[]={100,50,150};
    // int W=50;
    // cout<<knapsack(wt,value,3,W)<<endl;

    return 0;
}