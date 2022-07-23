
#include<iostream>
using namespace std;
void printincresing(int n,int i){
//base case
if(i==n+1)
{
    return ;
}
//recursive case
cout<<i<<" ";
printincresing(n,i+1);
}

 int main(){
 int n;
 cin>>n;
 printincresing(n,1);

 return 0;
 }




