#include<bits/stdc++.h>
using namespace std;

int getbit(int n, int pos)
    {
        return ((n & (1<<pos))!=0);
    }

int setBit(int n, int pos)
{
    return ((n | (1<<pos)));
}

int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);
    return(n & mask);
}

int updateBit(int n, int pos, int value)
{
    int mask = ~(1<<pos);
    n = n & mask;
    return(n | (value<<pos)); 
}

int main()
{
 cout<<getbit(5, 2);
 cout<<endl<<setBit(5,1);
 cout<<endl<<clearBit(5, 2);
 cout<<endl<<updateBit(5, 1, 1);
 return 0;
}