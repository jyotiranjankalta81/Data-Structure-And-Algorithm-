#include <iostream>
using namespace std;

int main()
{
    // int row, col;
    // cin>>row>>col;

    // complete rectangle
    // for (int i = 1; i <=row; i++)
    // {
    //     for (int j = 1; j <=col; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<"#"<<endl;

    // }

    // hollow rectangle

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (i==1 || i==row || j==1 || j==col)
    //         {
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }

    //     }
    //     cout<<endl;

    // }

    // reverse Pyramid
    int n;
    cin >> n;
    // for (int i=n; i>=1; i--)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }
    // floyd's Triangle
    // another setup

    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         if ((i+j)%2==0)
    //         {
    //             cout<<" 1";
    //         }
    //         else{
    //             cout<<" 0";
    //         }

    //     }
    //     cout<<endl;
    // }s
    // output:-5
    //  1
    //  0 1
    //  1 0 1
    //  0 1 0 1
    //  1 0 1 0 1
    //

    // Rhombus Pattern

    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 0; j <= n-i; j++)
    //         {
    //             cout<<" ";
    //         }
    //         for (int j = 1; j <= n; j++)
    //         {
    //             cout<<"*";
    //         }
    //         cout<<endl;

    //     }

    //     OutPut:-
    //     5
    //      *****
    //     *****
    //    *****
    //   *****
    //  *****
    //     for (int i = 1; i <=n; i++)
    //     {
    //         for (int j = 0; j <=n-i; j++)
    //         {
    //             cout<<" ";
    //         }
    //         for ( int j = 1; j <= i; j++)
    //         {
    //             cout<<j<<" ";
    //         }
    //         cout<<endl;

    //     }
    //     OUTPUT:-
    //     5
    //      1
    //     1 2
    //    1 2 3
    //   1 2 3 4
    //  1 2 3 4 5

    // for (int i = 1; i <= n; i++)
    // {
    //     int j;
    //     for ( j = 1; j <= n-i; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     int k=i;
    //     for (; j <= n; j++)
    //     {
    //         cout<<k--<<" ";
    //     }
    //     k=2;
    //     for (;j <= n+i-1; j++)
    //     {
    //         cout<<k++<<" ";
    //     }
    //     cout<<endl;
        
        
        
    // }
    // Zig-Zag Pattern
    // for (int i = 1; i <=3; i++)
    // {
    //     for (int j = 1; j <=n; j++)
    //     {
    //         if (((i+j)%4==0) || (i==2 && j%4==0))
    //         {
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
            
    //     }

    //     cout<<endl;
        
        
    // }
    
    

    return 0;
}