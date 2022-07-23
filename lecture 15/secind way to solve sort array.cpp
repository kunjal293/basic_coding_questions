
#include <iostream>
using namespace std;
bool sort(int*a,int n)
{//1. base case
    if(n==0)
    {
        return true;
    }
    //2. rescursive function
    bool ischotasorted= sort(a+1,n-1);
     if(a[0]<=a[1]&& ischotasorted==true){
        //poora array sorted hai
        return true;
     }
     else {
        return false;
     }

}
bool checksorted(int*a,int n,int i)
{
//base case
if(i=n-1){
    return false;
}
//recursive function
if(i==n-1 &&checksorted(a,n,i+1)==true){
    return true;
}
else{
    return false;
}
}

int main(){
    int a[]={1,5,6,8,10};
    int n =sizeof(a)/sizeof(int);
    bool x=sort(a,n);
   if(x==true){
    cout<<" not sorted"<<endl;
   }
   else{
    cout<<" sorted"<<endl;
   }
     if(a[0]<=a[1]&& checksorted){
        //poora array sorted hai
        return true;
     }
     else {
        return false;
     }
return 0;
}



