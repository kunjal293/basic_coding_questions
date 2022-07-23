///topdown approch of dp
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
int main ()
{
    int wine[]={2,3,5,1,4};
    int n= sizeof(wine)/sizeof(int);
    int dp[100][100];

    memset(dp,-1,sizeof dp);
     cout<<wineproblem(0,n-1,wine,1,dp)<<endl;
    return 0;
}

