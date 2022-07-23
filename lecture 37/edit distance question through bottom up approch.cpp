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
int bottomup(char*a,char*b)
{
    int dp[100][100];
    for(int i=0;i<=strlen(a);++i)
    {
        dp[i][0]=i;
    }
    for(int i=0;i<=strlen(b);++i)
    {
        dp[0][i]=i;
    }
    for(int i=1;i<=strlen(a);++i)
    {
        for(int j=0;j<=strlen(b);++j)
        {
            if(a[i-1]!=b[i-1])
            {
               dp[i][j]=min(dp[i][j-1],
                            min(dp[i-1][j-1],
                                dp[i-1][j]))+1;
            }
            else{
                dp[i][j]=dp[i-1][j-1];
            }
        }
    }
    return dp[strlen(a)][strlen(b)];
}
int main ()
{
    char a[]="abcd";
    char b[]="def";
    cout<<editdistance(a,b,strlen(a),strlen(b))<<endl;
    cout<<bottomup(a,b)<<endl;
    return 0;
}

