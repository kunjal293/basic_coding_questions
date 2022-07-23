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
int main ()
{
    char a[]="abcd";
    char b[]="def";
    cout<<editdistance(a,b,strlen(a),strlen(b))<<endl;
    return 0;
}
