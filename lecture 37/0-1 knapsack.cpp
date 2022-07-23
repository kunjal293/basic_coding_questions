#include<iostream>
using namespace std;
int knapsack (int*price,int*wt,int n,int capacity)
{
    //base case
    if(n==0||capacity==0)
    {
        return  0;
    }
    //recursive case
    int op1=INT_MIN,op2=INT_MIN;

    if(wt[n-1]<=capacity)
    {
        op1=price[n-1]+knapsack(price,wt,n-1,capacity-wt[n-1]);
    }
    op2=0+knapsack(price,wt,n-1,capacity);
    return max(op1,op2)
}
{
    int price[]={10,15,30,20};
    int n=sizeof (price)/sizeof(int)
    int  weight []={2,3,8,7};
    int m=sizeof(weight)/sizeof(int )
    return 0;
}
