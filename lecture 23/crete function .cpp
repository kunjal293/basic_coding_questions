#include <iostream >
using namespace std;

int *createarray(int n ){
    int*a=new int[n];
for (int i=0;i<=n;i++)
    {
        a[i]=i+1;
    }
    return 0;

    }


int main(){
 int n =20;
 int *arr=createarray(n);
 for(int i =0;i<n;i++)
 {
     cout<<arr[i]<<" ";

 }
 cout<<endl;
 delete[]arr;
 arr=NULL;;
 return 0;



 }
