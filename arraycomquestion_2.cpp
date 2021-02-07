#include<bits/stdc++.h>
using namespace std;

int smallest_missing(int A[], int n)
{
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }
    bool Q[max];
    for(int i=0;i<max;i++)
    {
        Q[i]=1;
    }
    for(int j=0;j<n;j++)
    {
    for(int i=0;i<max;i++)
    {
        Q[A[j]] = 0;
    }
    }
    for(int p =0;p<max; p++)
    {
        if (Q[p]==1)
        {
            cout<<p;
            break;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int A[n];
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    //int Sum;
    //cin>>Sum;
    //max_repetition(A, n);
    //subarray_sum(A,n,Sum);
    smallest_missing(A, n);
}