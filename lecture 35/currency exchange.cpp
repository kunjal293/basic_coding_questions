#include<iostream>
#include <cstring>
#include <climits>
using namespace std;
int coins(int amt,int *deno,int n){
    // base case
    if(amt==0){
        return 0;
    }
    // recursive case
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(amt>=deno[i]){
            int chota_amt=amt-deno[i];
            int smaller_ans=coins(chota_amt,deno,n);
            if(smaller_ans != INT_MAX){
                ans=min(smaller_ans + 1,ans);
            }
        }
    }
    return ans;
}
int topdown(int amt,int *deno,int n,int *dp){
    // base caes
    if(amt==0){
        return dp[amt]=0;
    }
    if(dp[amt]!=-1){
        return dp[amt];
    }
    // recursive case
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(amt>deno[i]){
            int chota_amt=amt-deno[i];
            int smaller_ans=topdown(chota_amt,deno,n,dp);
            if(smaller_ans != INT_MAX){
                ans=min(smaller_ans + 1,ans);
            }
        }
    }
    return dp[amt]=ans;
}
int bottomup(int amt,int*deno,int n)
{
    int *dp=new int [amt+1];
    dp[0]=0;
    for (int rupay=1;rupay<=amt;++rupay)
    {
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(rupay>=deno[i])
            {
                int kam_rupay=rupay-deno[i];
                int smaller_ans=dp[kam_rupay];
                if(smaller_ans!=INT_MAX)
                {
                    ans=min(ans,smaller_ans+1);
                }
            }
        }
        dp[rupay]=ans;
    }
    cout<<endl;
    return dp[amt];
}
int main(){
	int deno[]={1,7,10};
    int n=sizeof(deno)/sizeof(int);
    int amt;
    cin>>amt;
    int dp[100000];
    memset(dp,-1,sizeof dp);
    cout<<bottomup(amt,deno,n)<<endl;
    cout << topdown(amt,deno,n,dp)<<endl;
    cout<<coins(amt,deno,n)<<endl;
    return 0;
}
