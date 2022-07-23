
///searching in a array.cpp
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][n],i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"matrix is";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int x;
    cout<<"the number to searched in array";
    cin>>x;
    bool flag=false;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           if(arr[i][j]==x)
           {
               cout<<i<<j<<endl;
               flag=true;
           }
        }
    }
    if(flag==true)
    {
        cout<<"element is found";
    }
    else{
        cout<<"element is not in array";
    }

return 0;

}
