#include<iostream>
using namespace std;

// signed main(){
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; i++)
//         {
//             cin>>a[i][j];
//         }
        
//     }

//     // spiral order print

//     return 0;
// }

// transpose matrix
int main(){
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i <3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            int temp = A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    

    return 0;
    
}