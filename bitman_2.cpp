#include<bits/stdc++.h>
using namespace std;

//is the number power of 2
bool ispowerof2(int n)
{
    return(n && !(n & n-1));
}

//no of ones in a binary form
int numberofones(int n)
{
    int count =0;
    while (n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

//all possible subset of a set
void subsets(int arr[], int n)
{
    for(int i=0;i< (1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i& (1<<j))
            {
                cout<<arr[j]<<" "; 
            }
        }
        cout<<endl;
    }
}

int main()
{
    cout<<ispowerof2(16)<<endl;
    cout<<numberofones(19)<<endl;
    int arr[3]={1,2,3};
    subsets(arr,3);
    return 0;
}
