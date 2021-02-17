#include<bits/stdc++.h>
using namespace std;

//Sum of n 
int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n + Sum(n-1);
}

//n raise to power p
int Power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    return n*Power(n,p-1);
}

//Print Factorial of a Number
int Factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*Factorial(n-1);
}

//Print nth Fabonacci Number
int Fabonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return Fabonacci(n-1)+Fabonacci(n-2);
}

int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    cout<<Sum(n)<<endl;
    cout<<Power(n , p)<<endl;
    cout<<Factorial(n)<<endl;
    cout<<Fabonacci(n)<<endl;
}