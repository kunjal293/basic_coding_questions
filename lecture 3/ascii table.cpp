//ascii number
#include<iostream>
using namespace std;
int main()
{
    char ch;
    int i;
    cout<<"Character\t\tASCII Value\n";
    for(i=65; i<=90; i++)
    {
        ch = i;
        cout<<ch<<" "<<i<<endl;
    }
    for(i=97;i<=122;i++)
    {
        ch=i;
        cout<<ch<<" "<<i<<endl;
    }
    cout<<endl;
    return 0;
}

