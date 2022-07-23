
// check pallindrome.cpp/
//racecar is a pallindrome which means if your read it from left to right or from right to left the word remains te samw
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }

    }
    if(check==true )
    {
        cout<<"word is a pallindrome"<<endl;
    }
    else
    {
        cout<<"word is not a pallindrome"<<endl;
    }
return 0;
}
