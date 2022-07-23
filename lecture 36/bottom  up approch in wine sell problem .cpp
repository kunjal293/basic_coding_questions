//bottom up approch
//we need to fill every element bucket by bucket
#include<iostream>
#include<cstring>
using namespace std;
int wineproblem(int l,int r,int wine[],int day,int dp[][100])
{
    //base case
    if(l>r)
    {
        return dp[l][r]=0;
    }
   if(dp[l][r]!=-1)
    {
        return dp[l][r];
    }
    //recursive case
    int op1=wine[l]*day+wineproblem(l+1,r,wine,day+1,dp);
    int op2=wine[r]*day+wineproblem(l,r-1,wine,day+1,dp);
    return max(op1,op2);


}
int bottomup(int wine[],int n)
{
    int dp[100][100]={0};
    for(int i=0;i<n;++i)
    {
        dp[i][i]=n*wine[i];
    }
    for(int i=n-2;i>=0;--i)//i is iterated from n-3 becos 3 is needed ///we need to fill from bottom
    {
        for(int j=i+1;j<n;++j)
        {
            int day=n-(j-i);
            int op1=wine[i]*day+dp[i+1][j];
            int op2=wine[j]*day+dp[i][j-1];
            dp[i][j]=max(op1,op2);
        }

    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[0][n-1];
}
int main ()
{
    int wine[]={2,3,5,1,4};
    int n=sizeof(wine)/sizeof(int);
    int dp[100][100];
    memset(dp,-1,sizeof dp);
   cout<<wineproblem(0,n-1,wine,1,dp)<<endl;
   cout<<bottomup(wine,n)<<endl;
    return 0;
}
