#include <bits/stdc++.h>
using namespace std;


//Sum of all Subarray

/*int sum_subarray(int A[], int n)
{
    int Sum =0,result;
    for(int i=0;i<n;i++)
    {
        Sum =0;
        for(int j = i; j<n; j++)
        {
            Sum+=A[j];
            result+=Sum;
            cout<<endl<<A[j]<<" "<<Sum;
        }
        cout<<endl;
    }
    cout<<endl<<result;
    
}*/

//Find Max no. up till i

/*maxuptill_i(int A[], int n, int Key)
{
    int max = INT_MIN;
    for(int i=0; i<=Key;i++)
    {
        if (A[i]>max && Key<n)
        {
        max= A[i];
        }   
    }
    cout<<endl<<max;
}*/

// Finding Largest Arithematic Array

/*arithematic_array(int A[], int n, int key)
{
    //An array is said to be arithematic when the consequtive difference is same.
    int ans = 2;
    int pd = A[1] - A[0];
    int j =2;
    int current =2;
    while (j<n)
    {
        if(pd == A[j] - A[j-1])
        {
        current++;
        }
        else
        {
            pd =A[j]- A[j-1];
            current =2;
        }
    j++;
    ans = max(ans,current);
    }
    cout<<ans;
}*/

int Largest_Record(int A[], int n)

/*Isyana is given the number of visitors at her local theme park on N consecutive
days. The number of visitors on the i-th day is Vi

. A day is record breaking if it satisfies both of the following conditions:

● The number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.
● Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.*/
{
    //int A[n+1];
    //A[n]=-1;
    if (n==1)
    {
        cout<<n;
    }
    int ans = 0;
    int mx =-1;
    for(int i=0; i<n;i++)
    {
        if(A[i]>mx && A[i]>A[i+1])
        {
            ans++;
        }
        mx = max(mx, A[i]);
        cout<<mx<<endl;
    }
    //cout<<mx<<endl;
    cout<<ans;
}

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    //int key;
    //cin>>key;
    //sum_subarray(A,n);
    //maxuptill_i(A,n,key);
    //arithematic_array(A,n,key);
    Largest_Record(A, n);
    return 0;
}





