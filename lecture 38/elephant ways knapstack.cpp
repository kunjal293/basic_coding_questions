#include<iostream>
using namespace std;
int elephantways(int i,int j)
{
    //base case
    if(i==0 and j==0)
    {
        return 1;
    }
    //recursive case
    int ans=0;
    for(int k=0;k<i;k++)
    {
        ans+=elephantways(k,j);
    }
    for(int k=0;k<j;++k)
    {
        ans+=elephantways(i,k);
    }
    return ans;
}
int main ()
{
    cout<<elephantways(3,3)<<endl;
    return 0;
}
