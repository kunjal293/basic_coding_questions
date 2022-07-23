#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n==1||n==0)
        {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}


//return karne se pehle yaad karna hai
//calculate karne se pehle check karna hai
int fibo1(int n,int*dp)
{
    if(n==1||n==0)
    {
        dp[n]=n;
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return fibo1(n-1,dp)+fibo1(n-2,dp);
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    int *dp=new int[n+1];
    for(int i=0;i<=n;++i)
    {
       dp[i]=-1;
    }
    cout<<fibo1( n,dp)<<endl;
    cout<<fibo(n)<<endl;

    return 0;
}
