#include<iostream>
using namespace std;
int elephantways(int i,int j)
{
    //base case
    if(i==0 and j==0)
    {
        return 1;
    }
    //recursive case
    int ans=0;
    for(int k=0;k<i;k++)
    {
        ans+=elephantways(k,j);
    }
    for(int k=0;k<j;++k)
    {
        ans+=elephantways(i,k);
    }
    return ans;
}
int bottomup(int n,int m)
{
    int dp[100][100]={0};
    for(int i=0;i<=n;++i)
    {
        for(int j=0;j<=m;++j)
        {
            if(i==0 and j==0)
            {
                dp[i][j]=1;
            }
            else
            {
                int ans=0;
                for(int k=0;k<i;++k)
                {
                    ans+=dp[k][j];
                }
                for(int k=0;k<j;++k)
                {
                    ans+=dp[i][k];
                }
                dp[i][j]=ans;
            }
        }
    }
    return dp[n][m];
}
int main ()
{
    cout<<elephantways(3,3)<<endl;
    cout<<bottomup(3,3)<<endl;
    return 0;
}
