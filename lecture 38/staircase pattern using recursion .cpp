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

int main() {

    int n;
    cin>>n;
    int dp[10000];

    memset(dp,-1,sizeof dp);
    cout<<nstair(n,3,dp)<<endl;
    cout<<bottomup(n,3)<<endl;
    return 0;
}
