#include<iostream >
using namespace std;
int descnumber(int n){

//base case
if(n==0){
    cout<<n;
    return 0;
}
cout<<n<<" ";
descnumber(n-1);
}
int main (){
int n ;
cin>>n;
cout<<descnumber(n)<<endl;
return 0;
}
