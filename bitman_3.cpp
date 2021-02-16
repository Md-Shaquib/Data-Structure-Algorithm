#include<bits/stdc++.h>
using namespace std;


//Identify single unique digit from the give array 

int unique(int A[] , int n)
{
    int xorsum =0;
    for(int i =0; i<n;i++)
    {
        xorsum = xorsum^A[i];
    }
    return xorsum;
}

int getBit(int n, int pos)
{
    return((n &(1<<pos))!=0);
}
int setBit(int n, int pos)
{
    return(n|(1<<pos));
}

// Identify two unique digit from the set of given array

int unique2(int B[], int n)
{
    int xorsum =0;
    for(int i =0; i<n;i++)
    {
        xorsum = xorsum^B[i];
    }
    int tempxor = xorsum;
    int setbit =0;
    int pos =0;
    while (setbit!=1)
    {
        setbit= xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    int newxor =0;
    for(int i=0;i<n;i++)
    {
        if(getBit(B[i] , pos-1))
        {
            newxor = newxor^B[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}

// Indentify single unique digit from the set of the given array 

int unique3(int C[], int n)
{
    int result =0;
    for(int i =0;i<64;i++)
    {
        int sum =0;
        for (int j =0; j<n;j++)
        {
            if(getBit(C[j], i))
            {
                sum++;
            }
        }
        if(sum%3!=0)
        {
            result = setBit(result, i);
        }
    }
    cout<<result;
}

int main()
{
    int arr[]= {1,2,3,4,1,2,3};
    cout<<unique(arr, 7)<<endl;
    int arr1[]={1,2,3,1,2,3,5,7};
    unique2(arr1,8);
    int arr2[]= {1,2,3,1,2,3,1,2,3,4};
    unique3(arr2,10);
    return 0;
}