#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux)
    {

        if (N == 0)
            return N;
        /* if(N==1)
        {
            printf("move disk %d from rod %d to rod %d",from,from,to);
            return N;
        }*/
        int mov1 = toh(N - 1, from, aux, to);
        int mov2 = 1;
        printf("move disk %d from rod %d to rod %d\n", N, from, to);
        int mov3 = toh(N - 1, aux, to, from);
        return mov1 + mov2 + mov3;
    }
};

// { Driver Code Starts.

int main()
{

    // int T;
    // cin >> T; //testcases
    // while (T--)
    // {

    int N;
    cin >> N; //taking input N

    //calling toh() function
    Solution ob;

    cout << ob.toh(N, 1, 3, 2) << endl;
    // }
    return 0;
}

//Position this line where user code will be pasted.  // } Driver Code Ends