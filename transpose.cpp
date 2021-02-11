#include<bits/stdc++.h>
using namespace std;

/*int transpose_matrix(int n, int A[][n])
{
    int AT[n][n];
    for (int i = 1;i<n;i++)
    {
        for(int j =1;j<n;j++)
        {
            AT[i][j] = A[j][i];
        }
    }
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<AT[i][j]<<" ";
        }
        cout<<endl;
    }
}*/

int main()
{
    int n;
    cin>>n;
    int A[n][n];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>A[i][j];
        }
    }
    //transpose_matrix(A,n);
    int AT[n][n];
    for (int i = 1;i<=n;i++)
    {
        for(int j =1;j<=n;j++)
        {
            AT[i][j] = A[j][i];
        }
    }
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<AT[i][j]<<" ";
        }
        cout<<endl;
    }
}