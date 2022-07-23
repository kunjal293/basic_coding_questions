#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int arr[m][m],i,j;

   for(i=0;i<m;i++)
   {
       for(j=0;j<m;j++)
       {
           cin>>arr[i][j];
       }
   }
   //swapping the numbers
   for(i=0;i<m;i++)
   {
       for(j=i;j<m;j++)
       {
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
       }
   }
   // printing the output
   for(i=0;i<m;i++)
   {
       for(j=0;j<m;j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
return 0;

}

