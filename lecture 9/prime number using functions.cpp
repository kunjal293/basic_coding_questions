#include<iostream >
using namespace std;
bool checkprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {

            return false;
        }

    }

}
void printallprime(int n)
{
    for(int no=2;no<=n;++no)
    {
        if(checkprime(n) ==true)
        {
            cout<<no<<" ";
        }
    }

}
int main(){
    int n;
    cin>>n;
    bool ans =checkprime(n) ;

    if(ans==true)
    {
        cout<<"prime number"<<endl;
    }
    else {
        cout<<"not prime"<<endl;
    }
return 0;
}
