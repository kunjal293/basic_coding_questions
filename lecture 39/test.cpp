#include<iostream>
using namespace std;
int main()
{
    int a=11;
    int b= ++a+a++;
    cout<<a<<" "<<b;
    return 0;
}
