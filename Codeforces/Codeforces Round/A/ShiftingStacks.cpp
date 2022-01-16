// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         bool flag;
//         int n;
//         cin >> n;
//         ll h;
//         // int arr[n];
//         ll s = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> h;
//             s += h;
//             if (s < i * (i + 1) / 2)
//             {
//                 flag = true;
//             }
//         }

//         if (flag)
//         {
//             cout << "NO" << endl;
//         }
//         else
//             cout << "YES" << endl;
//     }
//     return 0;
// }

// // #include <iostream>

// // using namespace std;

#include <iostream>

using namespace std;

int main()
{
    int t, n;
    long long h;
    bool flag;
    cin >> t;
    while (t--)
    {
        long long s = 0;

        flag = false;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> h;
            s += h;
            if (s < i * (i + 1) / 2)
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}

// // int main() {
// //     int t , n ;
// //     long long h;
// //     bool flag;
// //     cin >> t;
// //     while(t--){
// //         long long s = 0;

// //         flag = false;
// //         cin >> n;
// //         for (int i = 0 ; i < n ; i++){
// //             cin >> h;
// //             s += h;
// //             if (s < i*(i+1)/2){
// //                 flag = true;
// //             }
// //         }
// //         if (flag){
// //             cout << "NO" << endl;
// //         }else
// //             cout << "YES"<< endl;
// //     }
// // }