#include<iostream >
using namespace std;
void primesieve(int n ){
bool a[10000];
for(int i=0;i<n;i++)
{ a[i]=true;

}
for(int i=2;i<=n;++i)
{
    if(a[i]=true)
    {
        for(int j=0;j<n;j+=i)
        {
            a[j]=false;
        }
    }
}
for(i=2;i<=n;i++)
{
    if(a[i]!=false)
    {
        cout<<i<<" ";
    }
}
cout<<endl;
}
int main (
    int n;
    cin>>n;
    primesieve(n);



return 0;
)

