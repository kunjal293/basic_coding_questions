//swap 2 numbers.cpp
#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
 int z;
 z=*x;

 *x=*y;

 *y=z;

}
int main()
{
     int a,b;
    cout<<"Enter Two Numbers To Swap: ";
    cin>>a>>b;

    swap(&a,&b);

    cout<<"After Swapping Two Numbers: ";
    cout<<a<<" "<<b<<" \n";

    return 0;
return 0;
}
