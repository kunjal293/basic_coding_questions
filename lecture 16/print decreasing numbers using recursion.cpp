//print decreasing.cpp
#include<iostream>
using namespace std;
void printdecreasing(int n,int i)
{
    //base case
    if(i==n+1)
    {
        return ;
    }
    //recursive case

    printdecreasing(n,i+1);
    cout<<i<<" ";

}
int main ()
{
int n;
 cin>>n;
 printdecreasing(n,1);

return 0;
}

