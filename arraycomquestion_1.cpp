#include<bits/stdc++.h>
using namespace std;

//find the smallest ith index with repetition

int max_repetition(int A[], int n)
{
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }
    int idx[max+1];
    for (int i=0; i<max+1; i++)
    {
        idx[i]=-1;
    }
    int minidx = INT_MAX;
    for(int i= 0; i<n;i++)
    {
        if(idx[A[i]]!=-1 )
        {
            minidx = min(idx[A[i]], minidx);
        }
        else
        {
            idx[A[i]] = i;
        }
    }
    if (minidx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    cout<<minidx<<endl;
}

//In a given array find the Subarray whose sum is equivalent to S

int subarray_sum(int A[], int n, int Sum)
{

    int S =0;
    for(int i=0;i<n;i++)
    {
        S =0;
        for(int j = i; j<n; j++)
        {
            S+=A[j];
            if ( S == Sum)
            {
                cout<<"Index is: "<<i<<" "<<j<<endl;
                for(int l =i; l<=j;l++ )
                {
                    cout<<A[l]<<" ";
                }
                 cout<<endl;
            }
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
    int Sum;
    cin>>Sum;
    max_repetition(A, n);
    subarray_sum(A,n,Sum);
}