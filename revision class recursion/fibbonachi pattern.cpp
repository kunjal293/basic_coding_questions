#include<iostream>
using namespace std;
int fibo(int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //recurrence relation
    int x=fibo(n-1);
    int y=fibo(n-2);
    int w=x+y;
    return w;
}
    int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
    }

