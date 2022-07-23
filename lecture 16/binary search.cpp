#include<iostream>
using namespace std;
int binarysearch(int*a,int n,int i)
//base case
if(s>e)
{
    return -1;
}
//recursive case
int mid=(s+e)/2;
if(a[mid]==key){
    return mid;
}
else if (a[mid]>key){
    int chotaans=binarysearch(a,s,mid-1,key);
    return chotaans;

}

int main(){
int a[]={1,2,3,4,5,6,7,98,10}
int n=sizeof(a)/sizeof(int)
cout<<binarysearch(a,0,n-1,11)<<endl;
return 0;
}

