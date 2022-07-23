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
int topdown(int n,int*dp)
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
    return topdown(n-1,dp)+topdown(n-2,dp);
    return dp[n];
}
int bottomup(int n)
{
    //initialization
    int *dp=new int [n-1];
    dp[0]=0




    ;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    //cout<<endl;
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
    cout<<topdown( n,dp)<<endl;
    cout<<bottomup(n)<<endl;
    cout<<fibo(n)<<endl;

    return 0;
}

