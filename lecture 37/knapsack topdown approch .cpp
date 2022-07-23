#include<iostream>
using namespace std;
int knapsack (int*price,int*wt,int n,int capacity,int dp[][100])
{
    //base case
    if(n==0||capacity==0)
    {
        return  dp[n][capacity]= 0;
    }
    if(dp[n][capacity]!=-1)
    {
        return dp[n][capacity];
    }
    //recursive case
    int op1=INT_MIN,op2=INT_MIN;

    if(wt[n-1]<=capacity)
    {

        op1= price[n-1]+knapsack(price,wt,n-1,capacity,wt[n-1],dp);
    }
    op2=0+knapsack(price,wt,n-1,capacity);
    return dp[n][capacity]=max(op1,op2);
}
int main (){
    int price[]={10,15,30,20};
    int n=sizeof (price)/sizeof(int)
    int  weight []={2,3,8,7};
    int capacity =5
    cout<<knapsack(price,wt,n,capacity)<<endl;
    return 0;
}

