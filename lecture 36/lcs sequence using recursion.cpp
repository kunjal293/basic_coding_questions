#include<iostream>
using namespace std;
int lcs(char a[],char b[],int i,int j)
{
    if(a[i]=='\0'||b[j]=='\0')
    {
        return 0;
    }

    if(a[i]==b[i])
    {
        return 1+lcs(a,b,i+1,j+1);
    }
    else
    {
        return max (lcs(a,b,i,j+1),lcs(a,b,i+1,j));
    }
}
int main ()
{
    char a[]="abcc",b[]="dbcc";


    cout<<lcs(a,b,0,0)<<endl;
    return 0;
    return 0;
}
