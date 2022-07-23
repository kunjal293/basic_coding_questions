//lcs subsequesnce using top down approch
#include<iostream>
#include<cstring>
using namespace std;

int lcs(char a[],char b[],int i,int j,int dp[][100])
{
    if(a[i]=='\0'||b[j]=='\0')
    {
        return dp[i][j]=0;
    }
    if (dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(a[i]==b[i])
    {
        return dp[i][j]=1+lcs(a,b,i,j+1,dp);
    }
    else
    {
        return dp[i][j]=max (lcs(a,b,i,j+1,dp),lcs(a,b,i+1,j,dp));
    }
}
int main ()
{
    char a[]="abcc",b[]="dbccx";
    int dp[100][100];
    memset(dp,-1,sizeof dp);
    cout<<lcs(a,b,0,0,dp)<<endl;
    return 0;
}
