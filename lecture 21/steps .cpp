// n steps .cpp
#include <iostream>
using namespace std;
int stairs (int n)
{
    //base case
    if(n==0)
    {
       return 1;
    }
    if(n<0)
    {
        return 0;
    }
    //recursive case
    return stairs(n-1)+stairs(n-2)+stairs(n-3);

}
int nstairs (int n ,int k )
{
    //base case
    if(n==0)
    {
        return 1;

    }
    if(n<0)
    {
        return 0;
    }

    //recursive case
    int ans =0;
    for(int i =1;i<=k;++i)
    {
        ans += nstairs(n-i, k);
    }
    return ans;
}
int main ()
{
    int n;
    cin>>n;
    cout<<stairs(n)<<endl;
return 0;
}




