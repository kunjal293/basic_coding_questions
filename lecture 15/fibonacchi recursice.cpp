#include<iostream>
using namespace std;
int fibo(int n){
    //1. base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //2.recurrence relation
    //fibo(n)=fibo(n-1)+fibo(n-2)
    //pure assumption
    int chotaans1=fibo(n-1);
    int chotaans2=fibo(n-2);
    int badaans=chotaans1+chotaans2;
    return badaans;
}
    int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
    }
