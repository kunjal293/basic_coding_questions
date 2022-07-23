#include<iostream>
using namespace std;
int sum (int *a,int n)
{


//base case
    if(n==0)
    {
    return 0;
    }

//recursive function
return a[n-1]+sum(a,n-1);
}
int main (){
    int a[]={1,5,6,8,10};
    int n = sizeof(a)/sizeof(int);
    cout<<sum(a,n)<<endl;


return 0;
}
