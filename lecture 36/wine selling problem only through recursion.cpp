#include<iostream>
using namespace std;
int wineproblem(int l,int r,int wine[],int day)
{
    //base case
    if(l>r)
    {
        return 0;
    }
    //recursive case
    int op1=wine[l]*day+wineproblem(l+1,r,wine,day+1);
    int op2=wine[r]*day+wineproblem(l,r-1,wine,day+1);
    return max(op1,op2);


}
int main ()
{
    int wine[]={2,3,5,1,4};
    int n= sizeof(wine)/sizeof(int);
    cout<<wineproblem(0,n-1,wine,1)<<endl;
    return 0;
}
