#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int A[10][10], row, column, key;
    cin>>row>>column;
    for(int i=0; i<row;i++)
    {
        for(int j =0; j<column;j++)
        {
            cin >>A[i][j];
        }
    }
    cin>>key;
    bool flag =false;
    int r=0, c = column-1;
    while(r<row and c>=0)
    {
        if(A[r][c]==key)
        {
            flag = true;
        }
        if (A[r][c]>key)
        {
            c--;
        }
        else
            r++;
    }
    if(flag)
    cout<<"Found";
    else
    cout<<"Not Found";
return 0;
}