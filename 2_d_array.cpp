#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }
    //spiral_array(n,m,A);
    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1;

    while(row_start<=row_end && col_start<= col_end)
    {
        //for rowstart
        for(int col=col_start;col<=col_end;col++)
        {
            cout<<A[row_start][col]<<" ";
        }
        row_start++;

        //for columnend
        for(int row=row_start;row<=row_end;row++)
        {
            cout<<A[row][col_end]<<" ";
        }
        col_end--;

        //for rowend
        for(int col= col_end;col>=col_start;col--)
        {
            cout<<A[row_end][col]<<" ";
        }
        row_end--;
        
        //for columnstart
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<A[row][col_start]<<" ";
        }
        col_start++;
    }
    return 0;
}
