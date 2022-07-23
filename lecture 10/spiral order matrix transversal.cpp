#include<iostream>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];

        }
    }
    //spiral wise print
    //we will create 4 variables row start row end col start col end
    int row_start=0,int row_end=n-1,int col_start=0,col_end=m-1;
    while(row_start<=row_end && col_start<=colend)
    {
        //for row start
        for(int col=col_start;col<=col_end;col++)
        {
            cout<<arr[col_start][col]<<" ";

        }
        row_start;
        //for colomm end
        for(int row=row_start;row<=row_end;row++)
        {
            cout<<arr[row_start][row]<<" ";

        }
        col_end--;

    }
return 0;

}
