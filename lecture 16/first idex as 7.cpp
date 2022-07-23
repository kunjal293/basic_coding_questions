#include<iostream>
using namespace std;
bool check7(int*a,int n,int i)
{
    //base case
    if(i==n)
    {
        return -1;
    }
    //recursive case
    if(a[i]==7)
    {
        return 1;
    }
    return check7(a,n,i+1);
}
int last7(int*a,int n,int i);
//base case
    if(i==n)
    {
        return -1;
    }
//recursive function
if(a[i]=7)
{
    int chotaans= i;
    int aage7=last7(a,n,i+1);
    if(aage7!=-1)
    {
        return aage7;
    }
    return chotaans;

}
else{
    return last7(a,n,i+1)
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int n =sizeof(a)/sizeof(int);
    if(check7(a,n,0))
    {
    cout<<"yes"<<endl;
    }
    else{
    cout<<"no"<<endl;
    }
    cout<<first7(a,n,0);
    cout<<last7(a,)
return 0;
}
