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
int bottomup(int*price,int*wt,int n,int capacity)
{
   int dp[100][100]={0};
   for(int n=1;n<=N;n++)
   {
       for(int c=1;c<=capacity;++c)
       {   int op1=INT_MIN,op2=INT_MIN
           if(c>=wt[n-1])
           {
               op1=price[n-1]+dp[n-1][c-wt[n-1]]
           }
           op2=0+dp[n-1][c];
           dp[n][c]=max(op1,op2);
       }
   }
   for(int n=0;n<=N;++n)
   {
       for(int c=0;c<=capacity;++c)
       {
           cout<<dp[n][c]<<" ";

       }
       cout<<endl;
   }
   return dp[N][capacity]
}
int main (){
    int price[]={10,15,30,20};
    int n=sizeof (price)/sizeof(int)
    int  weight []={2,3,8,7};
    int capacity =5
    cout<<knapsack(price,wt,n,capacity)<<endl;
    cout<<bottonup(price,wt,n,capacity)
    return 0;
}

include<iosteram>
