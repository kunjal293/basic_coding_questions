# include <iostream>
# include <cstring>
using namespace std;

int nstair(int n,int k,int *dp){
    if( n==0){
        return dp[n]=1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans = 0;
    for(int i=1;i<=k;++i){
        ans += nstair(n-i,k,dp);
    }
    return dp[n]=ans;
}
int bottomup(int n,int k)
{
    int dp[100];
    dp[0]=1;
    for(int i=1;i<=n;++i)
    {
        int ans=0,j=i-1;
        for(int x=0;x<k;++x)
        {
            if(j>=0)
            {
                ans+=dp[j--];
            }
        }
        dp[i]=ans;
    }
    for(int i=0;i<=n;++i)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    return dp[n];
}
//dp[n]=d+dp[n-1]-dp[n-k-1]
//k=3;
//dp[n]=d+dp[n-1]-dp[n-4];
int nstairsopt(int n,int k)
{
    int dp[100];
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;++i)
    {
        dp[i

        ]=2*dp[i-1]-(((i-k-1)>=0)?dp[i-1-k]:0);
    }
    for(int i=0;i<=n;++i)
    {
        cout<<dp[i]<<" ";

    }cout<<endl;
    return dp[n];
}
int main() {

    int n;
    cin>>n;
    int dp[10000];

    memset(dp,-1,sizeof dp);
    cout<<nstair(n,3,dp)<<endl;
    cout<<bottomup(n,3)<<endl;
    cout<<nstairsopt(n,3)<<endl;
    return 0;
}

