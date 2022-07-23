#include<iostream>
#include<cstring>
using namespace std;
//a:"abc",i=3
//b;"xyz,j=4
int editdistance(char*a,char *b,int i,int j)
{
    //base case
    if(i==0)
    {
        return j;
    }

    if(j==0)
    {
        return i;
    }
    //recursive case
    if (a[i-1]!=b[j-1])
    {
        int op1 =editdistance(a,b,i,j-1);
        int op2=editdistance (a,b,i-1,j-1);
        int op3=editdistance(a,b,i-1,j);
        return min (op1,min (op2,op3))+1;
    }
}
int topdown(char*a,char *b,int i,int j)
{
    int *dp=new int;

    if(i==0)
    {
        return dp[i][j]=j;
    }

    if(j==0)
    {
        return dp[i][j]=i;
    }
    if(dp[i][j]!=1)
    {
        return dp[i][j];
    }
    if(a[i-1]!=b[j-1])

        int op1 =topdown(a,b,i,j-1);
        int op2=topdown (a,b,i-1,j-1);
        int op3=topdown(a,b,i-1,j);
        return  dp[i][j]=min (op1,min (op2,op3))+1;
    }
    else{
        return topdown(a,b,i-1,j-1,dp)
    }
}
int main ()
{
    int dp[][100];
    char a[]="abcd";
    char b[]="def";
    memset(dp,-1,size of dp)
    cout<<editdistance(a,b,strlen(a),strlen(b))<<endl;
    cout<<topdown(a,b,strlen(a),strlen(b),dp)
    return 0;
}
