#include<iostream>
using namespace std;
int fact(int n){
    // 1.base case
    if(n==0){
        return 1;
    }
    //2. figure out the recurrence relation
    //fac(n)=n*n*fac(n-1)
    int chotaAns=fact(n-1);//pure assumptionhai maan lo hota hai
    int badaans=n*chotaAns;
    return 0;
}
int main (){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
return 0;
}
