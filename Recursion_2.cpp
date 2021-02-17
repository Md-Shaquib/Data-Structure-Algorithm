#include<bits/stdc++.h>
using namespace std;


// Check Array is Sorted or not
bool Sorted(int A[], int n)
{
    if(n==1)
    {
        return true;
    }
    bool restArray = Sorted(A+1, n-1);
    return (A[0]<A[1] && restArray);
}

//Print number in Decreasing Order
void DecreasingOrder(int n)
{
    if(n>0)
    {
    cout<<n<<" ";
    DecreasingOrder(n-1);
    }
}

//Print numbers in Increaing order
int IncreasingOrder(int n)
{
    if(n>0)
    {
        IncreasingOrder(n-1);
        cout<<n<<" ";
    }
}

// Print Starting index of Number
int firstocc(int A[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    if(A[i]== key)
    {
        return i;
    }
    return firstocc(A, n ,i+1, key);
}

// Print last inex of Number
int lastocc(int A[], int n, int i, int Key)
{
    if(i==n)
    {
        return -1;
    }
    int restArray = lastocc(A,n,i+1,Key);
    if(restArray!=-1)
    {
        return restArray;
    }
    if(A[i]== Key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int A[]= {1,2,3,4,2,5};
    cout<<Sorted(A, 6)<<endl;
    IncreasingOrder(n);
    cout<<endl;
    DecreasingOrder(n);
    cout<<endl;
    cout<<firstocc(A, 6, 0, 2)<<endl;
    cout<<lastocc(A,6,0,2);
    return 0;
}