#include<bits/stdc++.h>
using namespace std;

int Linearsearch (int A[],int n,int key)
{
    for (int k=0;k<n;k++)
    {
    int E = A[k];
    if (key == E)
        return k;
    }
}

int Binarysearch (int A[], int n, int key)
{

    int s=0;
    int e=0;

    while(s<=e)
    {
        int mid= (s+e)/2;
        if (A[mid]== key)
        {
            return mid;
        }
        if (A[mid]>key)
        {
            e=mid-1;
        }
        else
            s =mid+1;
    }
}

int *Selection_Sorting(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        for (int j =i+1; j<n;j++)
        {
            if(A[j]<A[i])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
           
        }
    }
    return A;
}

int *Bubble_Sort(int A[], int n)
{
    int count = 1;
    while (count<n)
    {
        for(int i=0;i<n-count;i++)
        {
            if(A[i]>A[i+1])
            {
                int temp = A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
        count++;
    }
    return A;
}

int *Insertion_Sort(int A[], int n)
{
    int current, j;
    for(int i=1; i<n; i++)
    {
        current = A[i];
        j = i;
        while (A[j-1] > current && j>0)
        {
            A[j]=A[j-1];
            j--;
        }
        A[j]= current;
    }
    return A;
}


int main()
{
    int n;
    cin>>n;
    int A[n];
    for (int i=0; i<n;i++)
    {
        cin>>A[i];
    }
    int key;
    cin>>key;
    cout<<Linearsearch(A, n, key)<<endl;
    int *ptr = Bubble_Sort(A, n);
     for(int s=0; s<n;s++)
    {
        cout<<ptr[s]<<" ";
    }
    cout<<endl;
    int result = Binarysearch(A, n, key);
    cout<<result<<endl;
    int *d = Selection_Sorting(A,n);
    int *p = Insertion_Sort(A, n);
    for(int s=0; s<n;s++)
    {
        cout<<d[s]<<" ";
    }
    cout<<endl;
     for(int s=0; s<n;s++)
    {
        cout<<p[s]<<" ";
    }
    return 0 ;
}

