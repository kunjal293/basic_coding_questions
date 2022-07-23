#//print decreasing.cpp
#include<iostream>

using namespace std;
int power(int x,int n)
{
    //base case
    if(n==0)
    {
        return 1 ;
    }
    //recursive case
    int chotiproblem=power(x,n-1);
    int badaans = x*chotiproblem;

    return badaans;

}
int main ()
{
int n,x;
 cin>>n;
 cin>>x;
cout<<power(x,n)<<endl;


return 0;
}

