#include<iostream>
#include<cstring>
using namespace std;
char a[][10]={"zero","one","two","three","four";"five","six","seven","eight","nine"};

void solve(int n){
 if(n=0){
    return ;
 }
int f=n%10;
solve(n/10);
cout<<a[f]<<endl;
}


int main()

{
    int n;
    cin>>n;
    solve(n);
return 0;
}

