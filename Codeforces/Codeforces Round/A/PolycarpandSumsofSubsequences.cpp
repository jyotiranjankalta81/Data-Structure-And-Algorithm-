#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[7];
        for (int i = 1; i <= 7; i++)
        {
            cin >> arr[i];
        }
        if ((arr[1] + arr[2] + arr[3]) == arr[7])
        {
            cout << arr[1] << " " << arr[2] << " " << arr[3] << endl;
        }
        else if ((arr[1] + arr[2] + arr[4]) == arr[7])
        {
            /* code */
            cout << arr[1] << " " << arr[2] << " " << arr[4] << endl;
        }
        else if ((arr[4] + arr[2] + arr[3]) == arr[7])
        {
            /* code */
            cout << arr[4] << " " << arr[2] << " " << arr[3] << endl;
        }
        else if ((arr[1] + arr[4] + arr[3]) == arr[7])
        {
            /* code */
            cout << arr[1] << " " << arr[4] << " " << arr[3] << endl;
        }
    }
    return 0;
}