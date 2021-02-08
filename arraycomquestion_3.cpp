#include<bits/stdc++.h>
using namespace std;


//LARGERST SUB_ARRAY SUM

int subarray_sum(int A[], int n)
{

    int S;
    int maxval=INT_MIN;
    for(int i=0;i<n;i++)
    {
        S =0;
        for(int j = i; j<n; j++)
        {
            S+=A[j];
        }
         maxval = max(S, maxval);
    } 
    cout<<maxval<<endl;  
}

//CIRCULAR SUB_ARRAY SUM

int kadane(int A[],int n)
{
    int currentsum =0;
    int maxsum = INT_MIN;
    for(int i=0; i<n;i++)
    {
        currentsum+=A[i];
        if(currentsum<0)
        {
        currentsum = 0;
        }
    maxsum = max(currentsum,maxsum);
    }
    return maxsum;
}   

int main()
{
     int n;
     cin>>n;
     int A[n];
     for(int i=0; i<n;i++)
     {
         cin>>A[i];
     }
     subarray_sum(A, n);
     int wrapsum;
     int nonwrapsum;

    nonwrapsum = kadane(A,n);
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
    totalsum+=A[i];
    A[i] = -A[i];
    }
    wrapsum = totalsum + kadane(A,n); 
    cout<<max(wrapsum, nonwrapsum)<<endl;
    return 0;
}